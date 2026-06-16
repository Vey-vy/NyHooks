#include "Memory.hpp"

void Protect(void *addr, std::size_t size, DWORD new_protect,
					DWORD *old_protect)
{
	VirtualProtect(addr, size, new_protect, old_protect);
}

void UnProtect(void *addr, std::size_t size, DWORD *saved)
{
	VirtualProtect(addr, size, PAGE_EXECUTE_READWRITE, saved);
}

std::string WideToUtf8(const std::wstring &wstr)
{
	if (wstr.empty())
		return {};

	int size_needed = WideCharToMultiByte(
		CP_UTF8, 0, wstr.c_str(), (int)wstr.size(), nullptr, 0, nullptr, nullptr);

	std::string result(size_needed, 0);

	WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), (int)wstr.size(), result.data(),
						size_needed, nullptr, nullptr);

	return result;
}