#pragma once
#include "Pch.hpp"
#include "Types/Detour.hpp"
#include "Types/Inline.hpp"

struct Hooks
{
	static bool RunScriptThreads(int ops_to_execute);
	static long __stdcall EndScene(LPDIRECT3DDEVICE9 pDevice);
	static HRESULT __stdcall Reset(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* params);
	static LRESULT Wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);
};

class HookingManager
{
public:
	void Initialize();
	void Shutdown();
	void HookAll();

	DetourHook &AddDetour(std::string name, void *target, void *detour)
	{
		auto hook = std::make_unique<DetourHook>();
		hook->Create(name, target, detour);
		auto &ref = *hook;
		m_Detours[name] = std::move(hook);
		return ref;
	}

	DetourHook *GetDetour(const std::string &name)
	{
		auto it = m_Detours.find(name);
		return it != m_Detours.end() ? it->second.get() : nullptr;
	}

	InlineHook &AddInline(std::string name, uintptr_t target, void *detour)
	{
		auto hook = std::make_unique<InlineHook>();
		hook->Create(name, target, detour);
		auto &ref = *hook;
		m_Inlines[name] = std::move(hook);
		return ref;
	}

	void ClearAll();

	void EnableAll();
	void DisableAll();

	WNDPROC GetOriginalWndproc() const { return m_Wndproc; }

	static HookingManager *Get()
	{
		static HookingManager instance;
		return &instance;
	}

private:
	WNDPROC m_Wndproc = nullptr;
	std::unordered_map<std::string, std::unique_ptr<DetourHook>> m_Detours;
	std::unordered_map<std::string, std::unique_ptr<InlineHook>> m_Inlines;
};