#include "inline.hpp"

void InlineHook::Create(std::string name, uintptr_t target, void *detour)
{
    m_Name = std::move(name);
    m_Target = target;
    m_Detour = reinterpret_cast<uintptr_t>(detour);

    DWORD old{};
    UnProtect(reinterpret_cast<void *>(m_Target), PATCH_SIZE, &old);
    std::memcpy(m_OriginalBytes.data(), reinterpret_cast<void *>(m_Target), PATCH_SIZE);
    Protect(reinterpret_cast<void *>(m_Target), PATCH_SIZE, old, &old);
}

void InlineHook::Enable()
{
    if (m_Enabled)
        return;
    WriteJmp(m_Target, m_Detour);
    m_Enabled = true;
}

void InlineHook::Disable()
{
    if (!m_Enabled)
        return;
    DWORD old{};
    UnProtect(reinterpret_cast<void *>(m_Target), PATCH_SIZE, &old);
    std::memcpy(reinterpret_cast<void *>(m_Target), m_OriginalBytes.data(), PATCH_SIZE);
    Protect(reinterpret_cast<void *>(m_Target), PATCH_SIZE, old, &old);
    m_Enabled = false;
}

void InlineHook::Remove()
{
    Disable();
}

void InlineHook::WriteJmp(uintptr_t from, uintptr_t to)
{
    DWORD old{};
    UnProtect(reinterpret_cast<void *>(from), PATCH_SIZE, &old);

    *reinterpret_cast<BYTE *>(from) = 0xE9;
    *reinterpret_cast<int32_t *>(from + 1) =
        static_cast<int32_t>(to - from - PATCH_SIZE);

    Protect(reinterpret_cast<void *>(from), PATCH_SIZE, old, &old);
    FlushInstructionCache(GetCurrentProcess(),
                          reinterpret_cast<LPCVOID>(from), PATCH_SIZE);
}