#pragma once

namespace rage {
	template<typename T>
	class pgCollection {
	private:
		T* m_data;
		uint16_t m_count;
		uint16_t m_size;

	public:
		T* begin() {
			return m_data;
		}

		T* end() {
			return (m_data + m_count);
		}

		T* at(uint16_t index) {
			return &m_data [ index ];
		}
	};
	static_assert(sizeof(rage::pgCollection<uint32_t>) == 0x8);
}