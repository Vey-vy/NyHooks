#include "HookingManager.hpp"
#include "Games/Comp/Render/Render.hpp"

void HookingManager::Initialize()
{
	if (MH_Initialize() != MH_OK)
		throw std::runtime_error("[HookingManager] MH_Initialize failed");
}

void HookingManager::Shutdown()
{
	ClearAll();
	MH_Uninitialize();
}

void HookingManager::HookAll()
{
	// this->add_detour("GAIH", g_pointers.m_gta.m_get_anticheat_initialized_hash, &hooks::get_anticheat_initialized_hash);
	// this->add_detour("GAIH2", g_pointers.m_gta.m_get_anticheat_initialized_hash2, &hooks::get_anticheat_initialized_hash_2);
	// this->add_detour("HSR", g_pointers.m_gta.m_http_start_request, &hooks::http_start_request);
	// this->add_detour("PMFS", g_pointers.m_gta.m_prepare_metric_for_sending, &hooks::prepare_metric_for_sending);
	// this->add_iat("GTC", os::g_hmodule, "kernel32.dll", "GetThreadContext", &hooks::get_thread_context);
}

void HookingManager::ClearAll()
{
	m_Inlines.clear();
	m_Detours.clear();
}

void HookingManager::EnableAll()
{
	if (!m_Detours.empty())
	{
		for (auto &[_, h] : m_Detours)
			h->Enable();
	}

	if (!m_Detours.empty())
	{
		for (auto &[_, h] : m_Inlines)
			h->Enable();
	}
}

void HookingManager::DisableAll()
{
	for (auto &[_, h] : m_Detours)
		h->Disable();

	for (auto &[_, h] : m_Inlines)
		h->Disable();
}