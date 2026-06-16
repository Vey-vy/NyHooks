#include "ModuleManager.hpp"

bool ModuleManager::Update()
{
    m_Modules.clear();
    HMODULE hMods[1024];
    auto hProcess = GetCurrentProcess();
    DWORD cbNeeded;

    if (EnumProcessModules(hProcess, hMods, sizeof(hMods), &cbNeeded))
    {
        for (unsigned int i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
        {
            char szModName[MAX_PATH];
            if (GetModuleFileNameExA(hProcess, hMods[i], szModName, sizeof(szModName)))
            {
                std::string name(szModName);
                size_t lastSlash = name.find_last_of("\\/");
                if (lastSlash != std::string::npos)
                    name = name.substr(lastSlash + 1);

                std::transform(name.begin(), name.end(), name.begin(), ::tolower);
                m_Modules[name] = Modules(hMods[i]);
            }
        }
    }
    return !m_Modules.empty();
}

const Modules *ModuleManager::Find(std::string name) const
{
    std::transform(name.begin(), name.end(), name.begin(), ::tolower);
    auto it = m_Modules.find(name);
    if (it != m_Modules.end())
    {
        return &it->second;
    }
    return nullptr;
}

Pointer ModuleManager::GetExport(const std::string &module_name, const char *proc_name) const
{
    const auto *mod = Find(module_name);
    if (!mod)
        return Pointer(nullptr);

    auto base = mod->Begin().as<std::uintptr_t>();
    auto dos_header = mod->Begin().as<IMAGE_DOS_HEADER *>();
    auto nt_headers = reinterpret_cast<IMAGE_NT_HEADERS *>(base + dos_header->e_lfanew);
    auto export_dir_rva = nt_headers->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress;

    if (!export_dir_rva)
        return Pointer(nullptr);

    auto exports = reinterpret_cast<IMAGE_EXPORT_DIRECTORY *>(base + export_dir_rva);
    auto names = reinterpret_cast<std::uint32_t *>(base + exports->AddressOfNames);
    auto funcs = reinterpret_cast<std::uint32_t *>(base + exports->AddressOfFunctions);
    auto ords = reinterpret_cast<std::uint16_t *>(base + exports->AddressOfNameOrdinals);

    for (std::uint32_t i = 0; i < exports->NumberOfNames; i++)
    {
        if (_stricmp(reinterpret_cast<const char *>(base + names[i]), proc_name) == 0)
        {
            return Pointer(base + funcs[ords[i]]);
        }
    }
    return Pointer(nullptr);
}

Pointer ModuleManager::GetModuleStealth(const std::wstring &module_name)
{
#ifdef _WIN64
    auto peb = reinterpret_cast<peb_custom *>(__readgsqword(0x60));
#else
    auto peb = reinterpret_cast<peb_custom *>(__readfsdword(0x30));
#endif
    if (!peb || !peb->Ldr)
        return Pointer(nullptr);

    LIST_ENTRY *list_head = &peb->Ldr->InMemoryOrderModuleList;
    for (LIST_ENTRY *it = list_head->Flink; it != list_head; it = it->Flink)
    {
        ldr_entry *entry = CONTAINING_RECORD(it, ldr_entry, InMemoryOrderLinks);

        if (entry->BaseDllName.buffer)
        {
            if (module_name.empty() || _wcsicmp(entry->BaseDllName.buffer, module_name.c_str()) == 0)
            {
                return Pointer(entry->DllBase);
            }
        }
    }
    return Pointer(nullptr);
}

void ModuleManager::Init()
{
    Update();
}

ModuleManager *ModuleManager::Get()
{
    static ModuleManager instance;
    return &instance;
}