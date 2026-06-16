#include "MemoryManager.hpp"
#include "Util/Log/Log.hpp"

Pointer MemoryManager::AddPattern(const std::string &name, const std::string &mod_name, const char *sig)
{
    const auto *mod = ModuleManager::Get()->Find(mod_name);
    if (!mod)
        return Pointer(nullptr);

    Pointer result = FindPattern(*mod, sig);
    if (result)
    {
        m_Patterns[name] = result;
        LOG_INFO << name << " Scanned.";
        return result;
    }
    return Pointer(nullptr);
}

Pointer MemoryManager::AddPattern(const std::string &name, Pointer addr)
{
    if (addr)
    {
        m_Patterns[name] = addr;
        LOG_INFO << name << " Scanned.";
    }
    return addr;
}

Pointer MemoryManager::Find(const std::string &name) const
{
    auto it = m_Patterns.find(name);
    return (it != m_Patterns.end()) ? it->second : Pointer(nullptr);
}

MemoryManager *MemoryManager::Get()
{
    static MemoryManager instance;
    return &instance;
}

Pointer MemoryManager::FindPattern(const Modules &mod, const char *sig)
{
    auto pattern_bytes = ParseSig(sig);
    if (pattern_bytes.empty())
        return Pointer(nullptr);

    auto start = mod.Begin().as<std::uint8_t *>();
    auto size = mod.Size();
    auto sig_data = pattern_bytes.data();
    auto sig_size = pattern_bytes.size();

    for (size_t i = 0; i < size - sig_size; ++i)
    {
        bool found = true;
        for (size_t j = 0; j < sig_size; ++j)
        {
            if (start[i + j] != sig_data[j] && sig_data[j] != -1)
            {
                found = false;
                break;
            }
        }
        if (found)
            return Pointer(&start[i]);
    }
    LOG_FATAL << "Pattern not found: " << sig;
    return Pointer(nullptr);
}

std::vector<int> MemoryManager::ParseSig(const char *sig)
{
    std::vector<int> bytes;
    char *start = const_cast<char *>(sig);
    char *end = start + strlen(sig);

    for (char *curr = start; curr < end; ++curr)
    {
        if (*curr == '?')
        {
            bytes.push_back(-1);
            if (*(curr + 1) == '?')
                curr++;
        }
        else if (isxdigit(*curr))
        {
            bytes.push_back(static_cast<int>(strtoul(curr, &curr, 16)));
        }
    }
    return bytes;
}