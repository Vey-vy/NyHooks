
#include "Core.hpp"

#include "Core/DirectX/DirectX.hpp"
#include "Core/Hooking/HookingManager.hpp"
#include "Core/Memory/ModuleManager.hpp"
#include "Util/Log/Log.hpp"
#include "games/Ny.hpp"
#include "games/Comp/NativeInvoker/NativeInvoker.hpp"
#include "games/Comp/Render/Render.hpp"
#include "games/Comp/ScriptManager/ScriptManager.hpp"
#include "games/Comp/NativeInvoker/Natives.hpp"
#include "games/Comp/Pool/Pool.hpp"
#include "games/Comp/Txd/Txd.hpp"

void Core::Initialize()
{
	LOG_INIT("log.txt");
	LOG_INFO << "NyHooks Starting...";
	ModuleManager::Get()->Init();
	HookingManager::Get()->Initialize();

	m_Hwnd = FindWindowW(L"grcWindow", nullptr);

	if (!m_Hwnd)
		throw std::runtime_error("Failed to find the game's window.");

	NyManager::Get()->AddComp<Render>();
	NyManager::Get()->AddComp<NativeInvoker>();
	NyManager::Get()->AddComp<ScriptManager>();
	NyManager::Get()->AddComp<Pool>();
	NyManager::Get()->AddComp<Txd>();

	NyManager::Get()->ScanAll();
	NyManager::Get()->Init();

	// DirectX::Get()->Initialize();

	HookingManager::Get()->HookAll();
	HookingManager::Get()->EnableAll();

	LOG_INFO << "NyHooks initialized";
}

void Core::Shutdown()
{
	HookingManager::Get()->DisableAll();
	HookingManager::Get()->Shutdown();
	NyManager::Get()->Shutdown();
	LOG_INFO << "NyHooks shutting down";
	::FreeLibraryAndExitThread(g_HModule, 0);
}