#pragma once
#include "scrNativeRegistration.hpp"

namespace rage {
	class scrNativeRegistrationTable {
	public:
		class scrNativeRegistration* m_registration; //0x0000
		uint32_t m_capacity;                         //0x0004
		char pad_0008 [ 4 ];                         //0x0008
		uint32_t m_count;                            //0x000C
		char pad_0010 [ 48 ];                        //0x0010
	};                                               //Size: 0x0040
	static_assert(sizeof(scrNativeRegistrationTable) == 0x40);

}