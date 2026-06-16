#pragma once
#include "rage/sysUseAllocator.hpp"

namespace rage {
    class pgStreamableBase : public sysUseAllocator {
    public:
    };
    static_assert(sizeof(rage::pgStreamableBase) == 0x4);
}