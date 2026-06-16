#pragma once

namespace rage {
	class sysMemAllocator {
	public:
		virtual ~sysMemAllocator() {
			call_virtual_method<0>(this, 0);
		}

		virtual void m_1() {
			call_virtual_method<1>(this);
		}
		virtual void* allocate(size_t size, size_t align, int subAllocator) {
			call_virtual_method<2>(this, size, align, subAllocator);
		}
		virtual void free(void* pointer) {
			call_virtual_method<3>(this, pointer);
		}
	};
	static_assert(sizeof(rage::sysMemAllocator) == 0x4);
}