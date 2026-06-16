#pragma once

namespace rage {
	class fwRect {
	public:
		float m_left;   // 0x0
		float m_top;    // 0x4
		float m_right;  // 0x8
		float m_bottom; // 0xC

	public:
		fwRect() :
		    m_left(1000000.0f), m_top(-1000000.0f), m_right(-1000000.0f), m_bottom(1000000.0f) {
		}
		fwRect(float m_left, float m_top, float m_right, float m_bottom) :
		    m_left(m_left), m_top(m_top), m_right(m_right), m_bottom(m_bottom) {
		}

		void grow(float x, float y) {
			this->m_left -= x;
			this->m_top -= y;
			this->m_right += x;
			this->m_bottom += y;
		}

		void translate(float x, float y) {
			this->m_left += x;
			this->m_top += y;
			this->m_right += x;
			this->m_bottom += y;
		}
	};
	static_assert(sizeof(rage::fwRect) == 0x10);
}