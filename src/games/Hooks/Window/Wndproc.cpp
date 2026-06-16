#include "Core/Hooking/HookingManager.hpp"
#include "Core/DirectX/DirectX.hpp"

LRESULT Hooks::Wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
    DirectX::Get()->Wndproc(hwnd, msg, wparam, lparam);
    return CallWindowProcW(HookingManager::Get()->GetOriginalWndproc(), hwnd, msg, wparam, lparam);
}