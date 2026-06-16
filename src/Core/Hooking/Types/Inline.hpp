#pragma once
#include "pch.hpp"
#include "util/memory.hpp"

class InlineHook
{
public:
    static constexpr std::size_t PATCH_SIZE = 5; // JMP rel32

    InlineHook() = default;
    ~InlineHook() { Remove(); }

    InlineHook(const InlineHook &) = delete;
    InlineHook &operator=(const InlineHook &) = delete;

    void Create(std::string name, uintptr_t target, void *detour);
    void Enable();
    void Disable();
    void Remove();

    [[nodiscard]] bool Enabled() const { return m_Enabled; }
    [[nodiscard]] const auto &Name() const { return m_Name; }

private:
    static void WriteJmp(uintptr_t from, uintptr_t to);

    uintptr_t m_Target = 0;
    uintptr_t m_Detour = 0;
    std::array<BYTE, PATCH_SIZE> m_OriginalBytes{};
    bool m_Enabled = false;
    std::string m_Name;
};