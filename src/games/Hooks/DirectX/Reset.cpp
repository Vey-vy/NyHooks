#include "Core/Hooking/HookingManager.hpp"
#include "Core/DirectX/DirectX.hpp"

HRESULT __stdcall Hooks::Reset(IDirect3DDevice9 *device, D3DPRESENT_PARAMETERS *params)
{
    if (!m_Cleaning) [[likely]]
    {
        DirectX::Get()->PreReset();
        auto result = HookingManager::Get()->GetDetour("D3D9Reset")->GetOriginal<HRESULT>(device, params);
        if (SUCCEEDED(result))
        {
            DirectX::Get()->PostReset();
        }
        return result;
    }
    return HookingManager::Get()->GetDetour("D3D9Reset")->GetOriginal<HRESULT>(device, params);
}