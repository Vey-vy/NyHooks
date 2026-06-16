#pragma once

namespace rage {
	class Quaternion {
	public:
		float m_x; // 0x0
		float m_y; // 0x4
		float m_z; // 0x8
		float m_w; // 0xC

		Quaternion(float x, float y, float z, float w) :
		    m_x(x), m_y(y), m_z(z), m_w(w) {
		}
	};
	static_assert(sizeof(rage::Quaternion) == 0x10);
}