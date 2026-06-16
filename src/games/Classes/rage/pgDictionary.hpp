#pragma once
#include "atArray.hpp"
#include "base/pgBase.hpp"

namespace rage {
	template<typename T>
	class pgDictionary : public pgBase {
	public:
		pgDictionary<T>* m_parent;
		int32_t m_ref_count;
		atArray<uint32_t> m_codes;
		atArray<T> m_entries;
	};
	static_assert(sizeof(pgDictionary<int32_t>) == 0x20);
}