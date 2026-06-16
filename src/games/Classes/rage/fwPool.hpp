#pragma once
#include "Games/Classes/base/fwBasePool.hpp"

namespace rage {
	template<class T>
	class fwPool : public fwBasePool {
	public:
		T* new_operator() {
			return static_cast<T*>(fwBasePool::new_operator());
		}

		T* new_operator(int32_t index) {
			return static_cast<T*>(fwBasePool::new_operator(index));
		}

		T* get_at(int32_t index) {
			return static_cast<T*>(fwBasePool::get_at(index));
		}

		T* get_slot(int32_t index) {
			return static_cast<T*>(fwBasePool::get_slot(index));
		}

		const T* get_slot(int32_t index) const {
			return static_cast<const T*>(fwBasePool::get_slot(index));
		}
	};
}

template<typename T>
using CPool = rage::fwPool<T>;