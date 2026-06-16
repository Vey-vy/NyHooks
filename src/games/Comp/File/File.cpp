#include "File.hpp"
#include "Core/Memory/MemoryManager.hpp"

bool File::Init()
{
    return true;
}

bool File::Shutdown()
{
    return true;
}

bool File::Scan()
{
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Fipackfile::Mount", PROCESS, "68 ? ? ? ? 8D 4C 24 10 E8 ? ? ? ? 68 ? ? ? ? 8D 4C 24 04 E8 ? ? ? ?"))
    {
        m_FipackfileMount = ptr.add(24).rip().as<FipackfileMount>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Fipackfile::Open", PROCESS, "56 8B CF 89 3D ? ? ? ? E8 ? ? ? ?"))
    {
        m_FipackfileOpen = ptr.add(10).rip().as<FipackfileOpen>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Fipackfile::Open", PROCESS, "75 0C 8B 8C 31 ? ? ? ? E8 ? ? ? ?"))
    {
        m_FipackfileClose = ptr.add(10).rip().as<FipackfileClose>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("FipackfileVtable", PROCESS, "C7 41 08 00 00 00 00 C7 41 0C FF FF FF FF C7 41 10 00"))
    {
        m_FipackfileVtable = *ptr.sub(11).as<uintptr_t **>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Fidevice::GetDevice", PROCESS, "51 57 8B 7C 24 0C 6A 07 68 ? ? ? ?"))
    {
        m_FideviceGetDevice = ptr.as<FideviceGetDevice>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Fidevice::Unmount", PROCESS, "55 8B 6C 24 08 B9 ? ? ? ? 8B C5 8D 64 24 00"))
    {
        m_FideviceUnmount = ptr.as<FideviceUnmount>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Fidevice::MountGlobal", PROCESS, "81 EC 18 01 00 00 B9 ? ? ? ? 56"))
    {
        m_FideviceMountGlobal = ptr.as<FideviceMountGlobal>();
    }
    return true;
}

std::string File::GetName()
{
    return "File";
}