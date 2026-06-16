
#include "Core.hpp"

#include "Core/DirectX/DirectX.hpp"
#include "Core/Hooking/HookingManager.hpp"
#include "Core/Memory/ModuleManager.hpp"
#include "Util/Log/Log.hpp"
#include "Games/Ny.hpp"
#include "Games/Comp/NativeInvoker/NativeInvoker.hpp"
#include "Games/Comp/Render/Render.hpp"
#include "Games/Comp/ScriptManager/ScriptManager.hpp"
#include "Games/Comp/NativeInvoker/Natives.hpp"
#include "Games/Comp/Pool/Pool.hpp"
#include "Games/Comp/Txd/Txd.hpp"
#include "Games/Comp/File/File.hpp"

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
	//NyManager::Get()->AddComp<File>();

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