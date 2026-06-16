
#include "DirectX.hpp"
#include "Util/Log/Log.hpp"
#include "Core/Hooking/HookingManager.hpp"
#include "Texture.hpp"

bool DirectX::Initialize()
{
	ImGui::CreateContext();
	m_Wndproc = WNDPROC(SetWindowLongPtrW(m_Hwnd, GWLP_WNDPROC, LONG_PTR(&Hooks::Wndproc)));

	if (!ImGui_ImplWin32_Init(m_Hwnd))
	{
		LOG_FATAL << "Failed to initialize Win32";
		return false;
	}

	if (!ImGui_ImplDX9_Init(m_Device))
	{
		LOG_FATAL << "Failed to initialize DirectX 12";
		return false;
	}

	TextureManager::Get()->Init(m_Device);

	return true;
}

void DirectX::Shutdown()
{
	ImGui_ImplDX9_Shutdown();
}

bool DirectX::AddCallbacks(std::function<void()> &&callback, std::uint32_t priority)
{
	return m_Callbacks.insert({priority, callback}).second;
}

bool DirectX::RemoveCallbacks(std::function<void()> &&callback)
{
	using Fn = void (*)();

	auto target = callback.target<Fn>();
	if (!target)
		return false;

	for (auto it = m_Callbacks.begin(); it != m_Callbacks.end(); ++it)
	{
		auto stored = it->second.target<Fn>();

		if (stored && *stored == *target)
		{
			m_Callbacks.erase(it);
			return true;
		}
	}

	return false;
}

void DirectX::AddWndprocCallbacks(WndprocCallbacks &&callback)
{
	return m_WndprocCallbacks.push_back(callback);
}

void DirectX::AddkeyboardHandler(KeyboardHandler function)
{
	m_KeyboardHandler.insert(function);
}

void DirectX::RemovekeyboardHandler(KeyboardHandler function)
{
	m_KeyboardHandler.erase(function);
}

void DirectX::OnPresent()
{
	NewFrame();

	for (const auto &callback : m_Callbacks | std::views::values)
		callback();

	EndFrame();
}

void DirectX::Wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
	for (const auto &callback : m_WndprocCallbacks)
		callback(hwnd, msg, wparam, lparam);

	ImGui_ImplWin32_WndProcHandler(hwnd, msg, wparam, lparam);
}

void DirectX::PreReset()
{
	ImGui_ImplDX9_InvalidateDeviceObjects();
}

void DirectX::PostReset()
{
	ImGui_ImplDX9_CreateDeviceObjects();
}

void DirectX::NewFrame()
{
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
}

void DirectX::EndFrame()
{
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
}