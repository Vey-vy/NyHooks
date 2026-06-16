#include "Core/Hooking/HookingManager.hpp"
#include "Core/DirectX/DirectX.hpp"

long __stdcall Hooks::EndScene(LPDIRECT3DDEVICE9 pDevice)
{
    DirectX::Get()->OnPresent();
    return HookingManager::Get()->GetDetour("D3D9EndScene")->GetOriginal<long>(pDevice);
}