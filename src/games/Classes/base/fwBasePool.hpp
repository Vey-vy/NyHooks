#pragma once
#include "PoolFlag.hpp"

#include <utility>

namespace rage
{
	class fwBasePool
	{
	public:
		uint8_t *m_storage;			// 0x0000
		uint8_t *m_flags;			// 0x0004
		int32_t m_size;				// 0x0008
		int32_t m_storage_size;		// 0x000C
		int32_t m_first_free_index; // 0x0010
		int32_t m_num_slot_used;	// 0x0014

		int32_t get_size() const
		{
			return m_size;
		}

		int32_t get_no_of_used_spaces() const
		{
			return m_num_slot_used;
		}

		int32_t get_no_of_free_spaces() const
		{
			return m_size - m_num_slot_used;
		}

		int32_t get_pool_size() const
		{
			return m_size;
		}

		bool get_is_free(int32_t index) const
		{
			return (m_flags[index] & POOL_FLAG_ISFREE) != 0;
		}

		int get_id(int i) const
		{
			return m_flags[i] & POOL_FLAG_REFERENCEMASK;
		}

		uint8_t get_reference(int32_t index) const
		{
			return (m_flags[index] & POOL_FLAG_REFERENCEMASK);
		}

		uint8_t get_flags(int32_t index) const
		{
			return (m_flags[index]);
		}

	public:
		void set_is_free(int32_t index, bool bIsFree)
		{
			bIsFree ? (m_flags[index] |= POOL_FLAG_ISFREE) : (m_flags[index] &= ~POOL_FLAG_ISFREE);
		}

		void set_id(int i, int id)
		{
			m_flags[i] = (m_flags[i] & POOL_FLAG_ISFREE) | (id & POOL_FLAG_REFERENCEMASK);
		}

		void set_reference(int32_t index, uint8_t nReference)
		{
			m_flags[index] = (m_flags[index] & ~POOL_FLAG_REFERENCEMASK) | (((nReference & POOL_FLAG_REFERENCEMASK) > 1 ? (nReference & POOL_FLAG_REFERENCEMASK) : 1));
		}

		void make_empty()
		{
			for (int32_t i = 0; i < m_size; i++)
			{
				set_is_free(i, true);
				set_reference(i, 0);
			}
		}

		void reset()
		{
			m_first_free_index = 0;
			make_empty();
		}

		void *get_at(int32_t index)
		{
			return m_flags[index >> 8] == (index & 0xFF) ? &m_storage[(index >> 8) * m_storage_size] : nullptr;
		}

		int32_t get_just_index_no_free_assert(const void *entry)
		{
			int index = (((uint8_t *)entry - m_storage) / m_storage_size);
			return index;
		}

		int32_t get_index(const void *entry)
		{
			int i = get_just_index_no_free_assert(entry);
			return m_flags[i] + (i << 8);
		}

		int32_t get_just_index(const void *entry)
		{
			int index = get_just_index_no_free_assert(entry);
			return index;
		}

		void *get_slot(int32_t index)
		{
			return get_is_free(index) ? nullptr : &m_storage[index * m_storage_size];
		}

		void *new_operator()
		{
			int32_t freeIndex = m_first_free_index;
			int32_t *nextFree = (int32_t *)(m_storage + freeIndex * m_storage_size);
			m_first_free_index = *nextFree;

			void *result = (void *)nextFree;
			set_is_free(freeIndex, false);
			set_reference(freeIndex, get_reference(freeIndex) + 1);
			return result;
		}

		void *new_operator(int32_t index)
		{
			const uint32_t i = (index >> 8);

			set_is_free(i, false);
			set_reference(i, index & 255);

			uint8_t *pT = &m_storage[i * m_storage_size];
			int32_t *prev = &m_first_free_index;
			while (*prev != -1 && *prev != i)
				prev = (int32_t *)(m_storage + *prev * m_storage_size);

			*prev = *(int32_t *)(m_storage + i * m_storage_size);

			m_num_slot_used++;
			return pT;
		}

		void delete_operator(void *pT)
		{
			int32_t index = get_just_index(pT);
			int32_t *node = (int32_t *)(m_storage + index * m_storage_size);
			*node = -1;

			if (m_first_free_index == -1)
				m_first_free_index = index;

			set_is_free(index, true);

			m_num_slot_used--;
		}
	};
}