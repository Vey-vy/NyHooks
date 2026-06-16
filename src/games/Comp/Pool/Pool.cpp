#include "Pool.hpp"
#include "Core/Memory/MemoryManager.hpp"

bool Pool::Init()
{
    return true;
}

bool Pool::Shutdown()
{
    return true;
}

bool Pool::Scan()
{
    if (Pointer ptr = MemoryManager::Get()->AddPattern("VehiclePool", PROCESS, "56 E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ?"))
    {
        m_VehiclePool = *ptr.add(33).as<CPool<void *> ***>();
        m_PedPool = *ptr.add(44).as<CPool<void *> ***>();
        m_ObjectPool = *ptr.add(55).as<CPool<void *> ***>();
    }
    return true;
}

std::string Pool::GetName()
{
    return "Pool";
}