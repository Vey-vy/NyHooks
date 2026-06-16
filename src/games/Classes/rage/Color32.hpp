#pragma once

namespace rage {
	class Color32 {
	public:
		uint8_t m_b; // 0x0
		uint8_t m_g; // 0x1
		uint8_t m_r; // 0x2
		uint8_t m_a; // 0x3

	public:
		Color32() = default;
		Color32(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255) :
		    m_r(red), m_g(green), m_b(blue), m_a(alpha) {
		}

		uint32_t get_argb() const {
			uint32_t argb = (static_cast<int>(m_a) << 24) | (static_cast<int>(m_r) << 16) | (static_cast<int>(m_g) << 8) | static_cast<int>(m_b);
			return argb;
		}

		bool operator==(const Color32& other) const {
			return m_r == other.m_r && m_g == other.m_g && m_b == other.m_b
			    && m_a == other.m_a;
		}

		Color32& operator+=(const Color32& other) {
			m_r =
			    static_cast<uint8_t>(std::min(static_cast<uint32_t>(m_r) + other.m_r, static_cast<uint32_t>(255)));
			m_g =
			    static_cast<uint8_t>(std::min(static_cast<uint32_t>(m_g) + other.m_g, static_cast<uint32_t>(255)));
			m_b =
			    static_cast<uint8_t>(std::min(static_cast<uint32_t>(m_b) + other.m_b, static_cast<uint32_t>(255)));
			m_a =
			    static_cast<uint8_t>(std::min(static_cast<uint32_t>(m_a) + other.m_a, static_cast<uint32_t>(255)));
			return *this;
		}

		Color32& operator-=(const Color32& other) {
			m_r =
			    static_cast<uint8_t>(std::max(static_cast<int32_t>(m_r) - other.m_r, 0));
			m_g =
			    static_cast<uint8_t>(std::max(static_cast<int32_t>(m_g) - other.m_g, 0));
			m_b =
			    static_cast<uint8_t>(std::max(static_cast<int32_t>(m_b) - other.m_b, 0));
			m_a =
			    static_cast<uint8_t>(std::max(static_cast<int32_t>(m_a) - other.m_a, 0));
			return *this;
		}

		Color32 operator-(const Color32& other) const {
			Color32 result(*this);
			result -= other;
			return result;
		}

		Color32 operator+(const Color32& other) const {
			Color32 result(*this);
			result += other;
			return result;
		}

		Color32& operator=(const Color32& other) {
			if (this != &other) {
				m_r = other.m_r;
				m_g = other.m_g;
				m_b = other.m_b;
				m_a = other.m_a;
			}
			return *this;
		}
	};
	static_assert(sizeof(rage::Color32) == 0x4);
}