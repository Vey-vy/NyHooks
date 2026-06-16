#pragma once
#include "pch.hpp"

void Protect(void *addr, std::size_t size, DWORD new_protect, DWORD *old_protect);
void UnProtect(void *addr, std::size_t size, DWORD *saved);
std::string WideToUtf8(const std::wstring &wstr);