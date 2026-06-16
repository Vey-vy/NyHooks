#pragma once
#include <cmath>

#pragma pack(push, 0x10)
namespace rage {
	class vector2 {
	public:
		float x, y;

		constexpr vector2(float x, float y) : x(x), y(y) {
		}

		constexpr vector2() : x(), y() {
		}
	};
	static_assert(sizeof(rage::vector2) == 0x8);

	class vector3 {
	public:
		float x, y, z;

	public:
		constexpr vector3(float x, float y, float z) : x(x), y(y), z(z) {
		}

		constexpr vector3() : x(), y(), z() {
		}

		bool operator==(const vector3& other) const {
			return this->x == other.x && this->y == other.y && this->z == other.z;
		}

		template<typename T>
		bool operator!=(const vector3& other) const {
			return this->x != other.x || this->y != other.y || this->z != other.z;
		}

		vector3 operator+(const vector3& other) const {
			vector3 vec;
			vec.x = this->x + other.x;
			vec.y = this->y + other.y;
			vec.z = this->z + other.z;
			return vec;
		}

		vector3 operator-(const vector3& other) const {
			vector3 vec;
			vec.x = this->x - other.x;
			vec.y = this->y - other.y;
			vec.z = this->z - other.z;
			return vec;
		}

		vector3 operator*(const vector3& other) const {
			vector3 vec;
			vec.x = this->x * other.x;
			vec.y = this->y * other.y;
			vec.z = this->z * other.z;
			return vec;
		}

		vector3 operator*(const float& other) const {
			vector3 vec;
			vec.x = this->x * other;
			vec.y = this->y * other;
			vec.z = this->z * other;
			return vec;
		}

		inline float GetMagnitude() const {
			return sqrt(x * x + y * y + z * z);
		}

		inline float GetDistance(const vector3& other) const {
			return (*this - other).GetMagnitude();
		}
	};
	static_assert(sizeof(rage::vector3) == 0xC);

	class alignas(16) alignedVector3 : public vector3 {};
	static_assert(sizeof(rage::alignedVector3) == 0x10);

	class vector4 {
	public:
		float x, y, z, w;

	public:
		constexpr vector4(float x, float y, float z, float w) :
		    x(x), y(y), z(z), w(w) {
		}

		constexpr vector4() : x(), y(), z(), w() {
		}

		bool operator==(const vector4& other) const {
			return this->x == other.x && this->y == other.y && this->z == other.z
			    && this->w == other.w;
		}

		bool operator!=(const vector4& other) const {
			return this->x != other.x || this->y != other.y || this->z != other.z
			    || this->w != other.w;
		}

		vector4 operator+(const vector4& other) const {
			return {this->x + other.x,
			        this->y + other.y,
			        this->z + other.z,
			        this->w + other.w};
		}

		vector4 operator-(const vector4& other) const {
			return {this->x - other.x,
			        this->y - other.y,
			        this->z - other.z,
			        this->w - other.w};
		}

		vector4& operator+=(const vector4& other) {
			this->x += other.x;
			this->y += other.y;
			this->z += other.z;
			this->w += other.w;
			return *this;
		}

		vector4& operator-=(const vector4& other) {
			this->x -= other.x;
			this->y -= other.y;
			this->z -= other.z;
			this->w -= other.w;
			return *this;
		}

		vector4 operator*(const vector4& other) const {
			return {this->x * other.x,
			        this->y * other.y,
			        this->z * other.z,
			        this->w * other.w};
		}

		vector4 operator*(const float& other) const {
			return {this->x * other, this->y * other, this->z * other, this->w * other};
		}
	};
};
#pragma pack(pop)