#pragma once
#include "Pch.hpp"
#include "../../Util/Timer.hpp"
#include "Exports.hpp"

using WndprocCallbacks = std::function<void(HWND, UINT, WPARAM, LPARAM)>;

class DirectX
{
public:
	bool Initialize();
	void Shutdown();

	bool AddCallbacks(std::function<void()> &&callback, std::uint32_t priority);
	bool RemoveCallbacks(std::function<void()> &&callback);
	void AddWndprocCallbacks(WndprocCallbacks &&callback);

	void OnPresent();

	void PreReset();
	void PostReset();
	void Wndproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);

	static DirectX *Get()
	{
		static DirectX instance;
		return &instance;
	}

	void AddkeyboardHandler(KeyboardHandler handler);
	void RemovekeyboardHandler(KeyboardHandler handler);

private:
	void NewFrame();
	void EndFrame();

	IDirect3DDevice9 *m_Device{};
	WNDPROC m_Wndproc = nullptr;
	std::map<uint32_t, std::function<void()>> m_Callbacks;
	std::vector<WndprocCallbacks> m_WndprocCallbacks;
	std::set<KeyboardHandler> m_KeyboardHandler;
};

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam);