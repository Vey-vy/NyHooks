#pragma once
#include "pch.hpp"

class Pointer
{
public:
	Pointer(void *ptr = nullptr) : ptr(ptr)
	{
	}
	explicit Pointer(std::uintptr_t ptr) : ptr(reinterpret_cast<void *>(ptr))
	{
	}

	template <typename T>
	std::enable_if_t<std::is_pointer_v<T>, T> as() const;

	template <typename T>
	std::enable_if_t<std::is_lvalue_reference_v<T>, T> as() const;

	template <typename T>
	std::enable_if_t<std::is_same_v<T, std::uintptr_t>, T> as() const;

	template <typename T>
	Pointer add(T offset) const;

	template <typename T>
	Pointer sub(T offset) const;

	Pointer ret() const;

	Pointer rip() const;

	explicit operator bool();

	friend bool operator==(Pointer a, Pointer b);
	friend bool operator!=(Pointer a, Pointer b);

private:
	void *ptr;
};

template <typename T>
inline std::enable_if_t<std::is_pointer_v<T>, T> Pointer::as() const
{
	return static_cast<T>(ptr);
}

template <typename T>
inline std::enable_if_t<std::is_lvalue_reference_v<T>, T> Pointer::as() const
{
	return *static_cast<std::add_pointer_t<std::remove_reference_t<T>>>(ptr);
}

template <typename T>
inline std::enable_if_t<std::is_same_v<T, std::uintptr_t>, T> Pointer::as() const
{
	return reinterpret_cast<std::uintptr_t>(ptr);
}

template <typename T>
inline Pointer Pointer::add(T offset) const
{
	return Pointer(as<std::uintptr_t>() + offset);
}

template <typename T>
inline Pointer Pointer::sub(T offset) const
{
	return Pointer(as<std::uintptr_t>() - offset);
}

inline Pointer Pointer::rip() const
{
	return add(as<std::int32_t &>()).add(4);
}

inline Pointer Pointer::ret() const
{
	return Pointer(as<std::uintptr_t>()).add(1);
}

inline bool operator==(Pointer a, Pointer b)
{
	return a.ptr == b.ptr;
}

inline bool operator!=(Pointer a, Pointer b)
{
	return a.ptr != b.ptr;
}

inline Pointer::operator bool()
{
	return ptr != nullptr;
}