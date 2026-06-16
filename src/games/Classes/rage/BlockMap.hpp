#pragma once
#include "base/pgStreamableBase.hpp"

namespace rage {
	class BlockMap : public pgStreamableBase {
	public:
	};
	static_assert(sizeof(rage::BlockMap) == 0x4);
}