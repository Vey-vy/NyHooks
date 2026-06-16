#pragma once
#include "base/pgBase.hpp"
#include "pch.hpp"
#include "rage/vector.hpp"

namespace rage {
	class grcTexture : pgBase {
	public:
		int8_t m_unk8;            // 0x08
		int8_t m_depth;           // 0x09
		int16_t m_ref_count;      // 0x0A
		int32_t m_unkC;           // 0x0C
		int32_t m_unk10;          // 0x10
		char* m_name;             // 0x14
		void* m_Direct3DTexture9; // 0x18
		int16_t m_width;          // 0x1C
		int16_t m_height;         // 0x1E
		int32_t m_format;         // 0x20
		int16_t m_mip_stride;     // 0x24
		int8_t m_image_type;      // 0x26
		int8_t m_mip_count;       // 0x27

	public:
		grcTexture() = delete;
		virtual ~grcTexture() {
			call_virtual_method<0>(this, 0);
		}

	public:
		void release() {
			int16_t count = m_ref_count;
			if (count) {
				int16_t result = count - 1;
				int8_t v5      = m_unk8;
				m_ref_count    = result;
				bool flag      = v5 == 2 || v5 == 4;
				if (!result && flag)
					delete this;
			}
		}
	};
	static_assert(sizeof(rage::grcTexture) == 0x28);

	class grcTexturePC : public grcTexture {
	private:
		vector3 m_unk28;
		vector3 m_unk34;
		grcTexturePC* m_previous;
		grcTexturePC* m_next;
		void* m_pixels;
		uint8_t m_unk4C;
		uint8_t m_unk4D;
		uint8_t m_unk4E;
		uint8_t m_unk4F;

	public:
		grcTexturePC() = default;

		int32_t get_width() {
			return call_virtual_method_and_return<int32_t, 8>(this);
		}
		int32_t get_height() {
			return call_virtual_method_and_return<int32_t, 9>(this);
		}
		int32_t get_mipmap_count() {
			return call_virtual_method_and_return<int32_t, 11>(this);
		}
	};
	static_assert(sizeof(rage::grcTexturePC) == 0x50);
}