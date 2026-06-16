#pragma once
#include "pch.hpp"

class DetourHook
{
public:
	DetourHook() = default;
	~DetourHook() { Remove(); }

	DetourHook(const DetourHook &) = delete;
	DetourHook &operator=(const DetourHook &) = delete;

	DetourHook(DetourHook &&o) noexcept
		: m_Target(o.m_Target), m_Detour(o.m_Detour),
		  m_Original(o.m_Original), m_Enabled(o.m_Enabled), m_Name(std::move(o.m_Name))
	{
		o.m_Target = o.m_Detour = o.m_Original = nullptr;
		o.m_Enabled = false;
	}

	void Create(std::string name, void *target, void *detour);
	void Enable();
	void Disable();
	void Remove();

	template <typename Ret, typename... Args>
	Ret GetOriginal(Args... args)
	{
		return reinterpret_cast<Ret (*)(Args...)>(m_Original)(args...);
	}

	[[nodiscard]] void *Original() const { return m_Original; }
	[[nodiscard]] bool Enabled() const { return m_Enabled; }
	[[nodiscard]] const auto &Name() const { return m_Name; }

private:
	void *m_Target = nullptr;
	void *m_Detour = nullptr;
	void *m_Original = nullptr;
	bool m_Enabled = false;
	std::string m_Name;
};