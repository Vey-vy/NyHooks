#pragma once
#include "Pch.hpp"
#include "Pointer.hpp"
#include "Module.hpp"

struct unicode_string_t
{
    unsigned short length;
    unsigned short maximum_length;
    wchar_t *buffer;
};

struct ldr_entry
{
    LIST_ENTRY InLoadOrderLinks;
    LIST_ENTRY InMemoryOrderLinks;
    LIST_ENTRY InInitializationOrderLinks;
    PVOID DllBase;
    PVOID EntryPoint;
    ULONG SizeOfImage;
    unicode_string_t FullDllName;
    unicode_string_t BaseDllName;
};

struct ldr_data
{
    ULONG Length;
    BOOLEAN Initialized;
    Pointer SsHandle;
    LIST_ENTRY InLoadOrderModuleList;
    LIST_ENTRY InMemoryOrderModuleList;
    LIST_ENTRY InInitializationOrderModuleList;
};

struct peb_custom
{
    BOOLEAN InheritedAddressSpace;
    BOOLEAN ReadImageFileExecOptions;
    BOOLEAN BeingDebugged;
    BOOLEAN SpareBool;
    Pointer Mutant;
    PVOID ImageBaseAddress;
    ldr_data *Ldr;
};

class ModuleManager
{
public:
    bool Update();

    const Modules *Find(std::string name) const;

    Pointer GetExport(const std::string &module_name, const char *proc_name) const;
    Pointer GetModuleStealth(const std::wstring &module_name);

    void Init();

    static ModuleManager *Get();
private:
    std::unordered_map<std::string, Modules> m_Modules;
};