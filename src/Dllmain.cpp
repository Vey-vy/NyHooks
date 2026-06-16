
#include "core/core.hpp"

static DWORD WINAPI thread_proc(LPVOID) noexcept {
	Core::Initialize();
	while (!(GetAsyncKeyState(VK_INSERT) & 1))
		Sleep(10);
	Core::Shutdown();
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) noexcept {
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		g_HModule = hModule;
		::DisableThreadLibraryCalls(g_HModule);

		CreateThread(nullptr, 0, thread_proc, nullptr, 0, nullptr);
		break;

	case DLL_PROCESS_DETACH:
		break;

	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH: break;
	}
	return TRUE;
}