#pragma once
#include "CVirtualBase.hpp"
#include "rage/vector.hpp"

class CBaseModelInfo : CVirtualBase {
public:
	int32_t m_unk0;               // 0x04
	int32_t m_unk1;               // 0x08
	int32_t m_unk2;               // 0x0C
	int32_t m_unk3;               // 0x10
	int32_t m_unk4;               // 0x14
	int32_t m_unk5;               // 0x18
	int32_t m_unk6;               // 0x1C
	rage::vector3 m_v_min_bounds; // 0x20
	float m_f_draw_distance;      // 0x2C
	rage::vector3 m_v_max_bounds; // 0x30
	uint32_t m_n_hash;            // 0x3C
	uint32_t m_n_ide_flags;       // 0x40
	int32_t m_n_ref_count;        // 0x44
	int16_t m_n_txd;              // 0x48
	int16_t m_unk7;               // 0x4A
	int16_t m_unk8;               // 0x4C
	int16_t m_unk9;               // 0x4E
	int16_t m_unk10;              // 0x50
	int16_t m_unk11;              // 0x52
	int16_t m_unk12;              // 0x54
	int16_t m_unk13;              // 0x56
	int16_t m_n_anim_index;       // 0x58
	uint8_t m_unk14;              // 0x5A
	uint8_t m_unk15;              // 0x5B
	int32_t m_unk16;              // 0x5C
};
static_assert(sizeof(CBaseModelInfo) == 0x60);