#pragma once
#include <cstdint>

namespace rage {
	class datBase {
	public:
		virtual ~datBase() {
		}
	};
	static_assert(sizeof(rage::datBase) == 0x4);
}