#include "Module.hpp"

Modules::Modules(HMODULE hMod) : m_Base(hMod)
{
    if (m_Base)
    {
        MODULEINFO mi{};
        if (K32GetModuleInformation(GetCurrentProcess(), m_Base.as<HMODULE>(), &mi, sizeof(mi)))
        {
            m_Size = mi.SizeOfImage;
            m_EntryPoint = Pointer(mi.EntryPoint);
        }
    }
}

Pointer Modules::Begin() const noexcept
{
    return m_Base;
}

Pointer Modules::End() const noexcept
{
    return m_Base.add(m_Size);
}

std::uintptr_t Modules::Size() const noexcept
{
    return m_Size;
}
Pointer Modules::EntryPoint() const noexcept
{
    return m_EntryPoint;
}

bool Modules::Contains(Pointer addr) const noexcept
{
    return (addr.as<std::uintptr_t>() >= Begin().as<std::uintptr_t>() &&
            addr.as<std::uintptr_t>() < End().as<std::uintptr_t>());
}