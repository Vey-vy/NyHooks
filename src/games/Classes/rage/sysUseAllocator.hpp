#pragma once

namespace rage {
	class sysUseAllocator {
	public:
		uint32_t* m_ptr; // 0x0
	};
	static_assert(sizeof(rage::sysUseAllocator) == 0x4);
}