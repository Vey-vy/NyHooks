#include "Render.hpp"
#include "Core/Memory/MemoryManager.hpp"
#include "Core/Hooking/HookingManager.hpp"

bool Render::Init()
{
    return true;
}

bool Render::Shutdown()
{
    return true;
}

bool Render::Scan()
{
    // if (Pointer ptr = MemoryManager::Get()->AddPattern("D3D9Device", PROCESS, "A3 ? ? ? ? C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? A1 ? ? ? ?"))
    // {
    //     m_D3D9Device = *ptr.add(1).as<IDirect3DDevice9 ***>();
    //     HookingManager::Get()->AddDetour("D3D9EndScene", *reinterpret_cast<void ***>(*m_D3D9Device)[42], Hooks::EndScene);
    //     HookingManager::Get()->AddDetour("D3D9Reset", *reinterpret_cast<void ***>(*m_D3D9Device)[16], Hooks::Reset);
    // }
    return true;
}

std::string Render::GetName()
{
    return "Render";
}