#include "Txd.hpp"
#include "Core/Memory/MemoryManager.hpp"
#include "Core/Hooking/HookingManager.hpp"

bool Txd::Init()
{
    // auto slot = m_AddTxdSlot("nyhooks_menu");
    // m_LoadTxdSlot(slot, "nyhooks_menu");
    // m_StoreAddRef(slot);
    // m_PushCurrentTxd();
    // m_SetCurrentTxd(slot);

    // m_PopCurrentTxd(slot);
    return true;
}

bool Txd::Shutdown()
{
    return true;
}

bool Txd::Scan()
{
    if (Pointer ptr = MemoryManager::Get()->AddPattern("TxdStuff", PROCESS, "83 FE FF 75 25 68 ? ? ? ?"))
    {
        m_FindTxdSlot = ptr.sub(9).rip().as<FindTxdSlot>();
        m_AddTxdSlot = ptr.add(11).rip().as<AddTxdSlot>();
        m_LoadTxdSlot = ptr.add(28).rip().as<LoadTxdSlot>();
        m_StoreAddRef = ptr.add(30).rip().as<StoreAddRef>();
        m_PushCurrentTxd = ptr.add(38).rip().as<PushCurrentTxd>();
        m_SetCurrentTxd = ptr.add(44).rip().as<SetCurrentTxd>();
        m_PopCurrentTxd = ptr.add(102).rip().as<PopCurrentTxd>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("TxdPool", PROCESS, "8B 15 ? ? ? ? 8B 42 04 F6 04 06 80"))
    {
        m_TxdPool = *ptr.add(2).rip().as<void **>();
    }
    if (Pointer ptr = MemoryManager::Get()->AddPattern("Txd", PROCESS, "A1 ? ? ? ? 89 42 08 89 15 ? ? ? ?"))
    {
        m_Txd = *ptr.add(10).rip().as<void **>();
    }
    return true;
}

std::string Txd::GetName()
{
    return "Txd";
}