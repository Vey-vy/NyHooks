#pragma once
#include "base/pgStreamableBase.hpp"

namespace rage {
    template<typename T>
    class pgPtr : pgStreamableBase {
    public:
        T* get() { return (T*)m_ptr; }
    };
    static_assert(sizeof(rage::pgPtr<std::uint32_t>) == 0x4);
}