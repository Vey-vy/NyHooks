#include "detour.hpp"

void DetourHook::Create(std::string name, void *target, void *detour)
{
	m_Name = std::move(name);
	m_Target = target;
	m_Detour = detour;

	if (MH_CreateHook(m_Target, m_Detour, &m_Original) != MH_OK)
		throw std::runtime_error("[DetourHook] MH_CreateHook failed: " + m_Name);
}

void DetourHook::Enable()
{
	if (!m_Enabled && MH_EnableHook(m_Target) == MH_OK)
		m_Enabled = true;
}

void DetourHook::Disable()
{
	if (m_Enabled && MH_DisableHook(m_Target) == MH_OK)
		m_Enabled = false;
}

void DetourHook::Remove()
{
	if (!m_Target)
		return;
	Disable();
	MH_RemoveHook(m_Target);
	m_Target = m_Detour = m_Original = nullptr;
}