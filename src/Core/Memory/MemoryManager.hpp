#pragma once
#include "ModuleManager.hpp"
#include "Pointer.hpp"

class MemoryManager
{
public:
	Pointer AddPattern(const std::string &name, const std::string &mod_name, const char *sig);
	Pointer AddPattern(const std::string &name, Pointer addr);

	Pointer Find(const std::string &name) const;

	template <typename T>
	T Read(uintptr_t address)
	{
		if (!address)
			return T{};
		return *reinterpret_cast<T *>(address);
	}

	template <typename T>
	void Write(uintptr_t address, T value)
	{
		if (!address)
			return;
		DWORD old_protect;
		VirtualProtect(reinterpret_cast<void *>(address), sizeof(T), PAGE_EXECUTE_READWRITE, &old_protect);
		*reinterpret_cast<T *>(address) = value;
		VirtualProtect(reinterpret_cast<void *>(address), sizeof(T), old_protect, &old_protect);
	}

	static MemoryManager *Get();

private:
	std::unordered_map<std::string, Pointer> m_Patterns;

	Pointer FindPattern(const Modules &mod, const char *sig);
	std::vector<int> ParseSig(const char *sig);
};