#pragma once

namespace rage {
	class scrNativeRegistration {
	public:
		uint32_t m_hash;          //0x0000
		uint32_t m_unk;           //0x0004
		uint32_t m_handler [ 7 ]; //0x0008
		char pad_0024 [ 4088 ];   //0x0024
	};                            //Size: 0x101C
	static_assert(sizeof(scrNativeRegistration) == 0x101C);
}