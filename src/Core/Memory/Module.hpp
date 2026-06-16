#pragma once
#include "pch.hpp"
#include "Pointer.hpp"

#include <psapi.h>

class Modules
{
public:
    Modules() = default;

    explicit Modules(HMODULE hMod);

    Pointer Begin() const noexcept;

    Pointer End() const noexcept;

    std::uintptr_t Size() const noexcept;
    Pointer EntryPoint() const noexcept;

    bool Contains(Pointer addr) const noexcept;

    explicit operator bool() const noexcept
    {
        return m_Base.as<void *>() != nullptr && m_Size > 0;
    }

private:
    Pointer m_Base{nullptr};
    std::uintptr_t m_Size{0};
    Pointer m_EntryPoint{nullptr};
};