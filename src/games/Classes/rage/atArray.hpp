#pragma once
#include <cstdint>
#include <windows.h>

namespace rage {
	template<typename T, uint16_t COUNT = 0>
	class atArray {
	private:
		T* m_elements;
		uint16_t m_count;
		uint16_t m_capacity;

	public:
		class iterator {
		private:
			T* ptr;

		public:
			explicit iterator(T* p) : ptr(p) {
			}

			T& operator*() {
				return *ptr;
			}

			iterator& operator++() {
				++ptr;
				return *this;
			}

			bool operator!=(const iterator& other) const {
				return ptr != other.ptr;
			}
		};

		iterator begin() {
			return iterator(m_elements);
		}

		iterator end() {
			return iterator(m_elements + m_count);
		}

		T& operator[](uint32_t index) {
			return m_elements [ index ];
		}

		auto at(uint32_t index) {
			return m_elements [ index ];
		}

		int16_t capacity() {
			return m_capacity;
		}

		int16_t count() {
			return m_count;
		}

		atArray() {
			reserve(COUNT);
		}

		~atArray() {
			kill();
		}

		uint8_t* allocate(int32_t count) {
			return new uint8_t [ sizeof(T) * count ];
		}

		void reserve(uint32_t capacity) {
			if (capacity)
				m_elements = (T*)allocate(capacity);

			m_capacity = capacity;
		}

		void kill() {
			if (m_capacity > 0)
				delete [] (uint8_t*)m_elements;
		}
	};
	static_assert(sizeof(rage::atArray<std::uint32_t>) == 0x8);
}