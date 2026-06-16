#pragma once
#include "base/datBase.hpp"
#include "rage/BlockMap.hpp"
#include "rage/pgPtr.hpp"


namespace rage {
	class pgBase : datBase {
	public:
		pgPtr<BlockMap> m_blockmap; // 0x4
	};
	static_assert(offsetof(rage::pgBase, m_blockmap) == 0x4);
	static_assert(sizeof(rage::pgBase) == 0x8);
}