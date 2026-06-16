#pragma once
#include "grcTexture.hpp"

namespace rage {
	template<typename T>
	class pgRef {
	public:
		T* m_ptr;

	public:
		pgRef() : m_ptr(nullptr) {
		}
		pgRef(T* p) : m_ptr(p) {
		}

		pgRef& operator=(T* other) {
			this->m_ptr = other;
			return *this;
		}

		explicit operator bool() const {
			return this->m_ptr != nullptr;
		}

		T* get() {
			return this->m_ptr;
		}
	};
	static_assert(sizeof(rage::pgRef<uint32_t>) == 0x4);
}