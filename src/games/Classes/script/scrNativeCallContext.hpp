#pragma once
#include "Games/Classes/rage/vector.hpp"

#include <utility>

namespace rage {
	class scrNativeCallContext {
	protected:
		void* m_pReturn;
		uint32_t m_nArgCount;
		void* m_pArgs;
		uint32_t m_nDataCount;
		vector3* m_pOriginalData [ 4 ];
		vector4 m_TemporaryData [ 4 ];

	public:
		constexpr void reset() {
			m_nArgCount  = 0;
			m_nDataCount = 0;
		}

		template<typename T>
		constexpr void push_arg(T&& value) {
			static_assert(sizeof(T) <= sizeof(std::uint32_t));
			*reinterpret_cast<std::remove_cv_t<std::remove_reference_t<T>>*>(reinterpret_cast<std::uint32_t*>(m_pArgs) + (m_nArgCount++)) = std::forward<T>(value);
		}

		template<typename T>
		constexpr T& get_arg(std::size_t index) {
			static_assert(sizeof(T) <= sizeof(std::uint32_t));
			return *reinterpret_cast<T*>(reinterpret_cast<std::uint32_t*>(m_pArgs) + index);
		}

		template<typename T>
		constexpr void set_arg(std::size_t index, T&& value) {
			static_assert(sizeof(T) <= sizeof(std::uint32_t));
			*reinterpret_cast<std::remove_cv_t<std::remove_reference_t<T>>*>(reinterpret_cast<std::uint32_t*>(m_pArgs) + index) = std::forward<T>(value);
		}

		template<typename T>
		constexpr T* get_return_value() {
			return reinterpret_cast<T*>(m_pReturn);
		}

		template<typename T>
		constexpr void set_return_value(T&& value) {
			*reinterpret_cast<std::remove_cv_t<std::remove_reference_t<T>>*>(m_pReturn) = std::forward<T>(value);
		}
	};

	using scrNativeHash    = std::uint32_t;
	using scrNativePair    = std::pair<scrNativeHash, scrNativeHash>;
	using scrNativeHandler = void (*)(scrNativeCallContext*);
}