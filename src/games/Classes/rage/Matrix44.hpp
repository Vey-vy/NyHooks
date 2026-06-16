#pragma once
#include "Quaternion.hpp"
#include "rage/vector.hpp"

namespace rage {
	class Matrix44 {
	public:
		rage::vector4 m_right;
		rage::vector4 m_up;
		rage::vector4 m_at;
		rage::vector4 m_pos;

	public:
		rage::vector4& get_position() {
			return m_pos;
		}
		rage::vector4& get_right() {
			return m_right;
		}
		rage::vector4& get_forward() {
			return m_up;
		}
		rage::vector4& get_up() {
			return m_at;
		}

		const rage::vector4& get_position() const {
			return m_pos;
		}
		const rage::vector4& get_right() const {
			return m_right;
		}
		const rage::vector4& get_forward() const {
			return m_up;
		}
		const rage::vector4& gte_up() const {
			return m_at;
		}

	public:
		Matrix44() = default;

		void copy(const Matrix44& other) {
			m_right = other.m_right;
			m_up    = other.m_up;
			m_at    = other.m_at;
			m_pos   = other.m_pos;
		}

		void copy(const Matrix44* other) {
			m_right = other->m_right;
			m_up    = other->m_up;
			m_at    = other->m_at;
			m_pos   = other->m_pos;
		}

		Matrix44 operator+(const Matrix44& other) const {
			Matrix44 result = {};
			result.m_right  = m_right + other.m_right;
			result.m_up     = m_up + other.m_up;
			result.m_at     = m_at + other.m_at;
			result.m_pos    = m_pos + other.m_pos;
			return result;
		}

		Matrix44 operator-(const Matrix44& other) const {
			Matrix44 result = {};
			result.m_right  = m_right - other.m_right;
			result.m_up     = m_up - other.m_up;
			result.m_at     = m_at - other.m_at;
			result.m_pos    = m_pos - other.m_pos;
			return result;
		}

		Matrix44& operator=(const Matrix44& other) {
			if (this != &other) {
				m_right = other.m_right;
				m_up    = other.m_up;
				m_at    = other.m_at;
				m_pos   = other.m_pos;
			}
			return *this;
		}

		Matrix44& operator+=(const Matrix44& other) {
			m_right += other.m_right;
			m_up += other.m_up;
			m_at += other.m_at;
			m_pos += other.m_pos;
			return *this;
		}

		Matrix44& operator-=(const Matrix44& other) {
			m_right -= other.m_right;
			m_up -= other.m_up;
			m_at -= other.m_at;
			m_pos -= other.m_pos;
			return *this;
		}

		Matrix44 operator*(const Matrix44& other) const {
			Matrix44 result = {};

			result.m_right.x = this->m_right.x * other.m_right.x
			    + this->m_right.y * other.m_up.x + this->m_right.z * other.m_at.x;
			result.m_right.y = this->m_right.x * other.m_right.y
			    + this->m_right.y * other.m_up.y + this->m_right.z * other.m_at.y;
			result.m_right.z = this->m_right.x * other.m_right.z
			    + this->m_right.y * other.m_up.z + this->m_right.z * other.m_at.z;

			result.m_up.x = this->m_up.x * other.m_right.x
			    + this->m_up.y * other.m_up.x + this->m_up.z * other.m_at.x;
			result.m_up.y = this->m_up.x * other.m_right.y
			    + this->m_up.y * other.m_up.y + this->m_up.z * other.m_at.y;
			result.m_up.z = this->m_up.x * other.m_right.z
			    + this->m_up.y * other.m_up.z + this->m_up.z * other.m_at.z;

			result.m_at.x = this->m_at.x * other.m_right.x
			    + this->m_at.y * other.m_up.x + this->m_at.z * other.m_at.x;
			result.m_at.y = this->m_at.x * other.m_right.y
			    + this->m_at.y * other.m_up.y + this->m_at.z * other.m_at.y;
			result.m_at.z = this->m_at.x * other.m_right.z
			    + this->m_at.y * other.m_up.z + this->m_at.z * other.m_at.z;

			result.m_pos.x = this->m_pos.x * other.m_right.x
			    + this->m_pos.y * other.m_up.x + this->m_pos.z * other.m_at.x
			    + other.m_pos.x;
			result.m_pos.y = this->m_pos.x * other.m_right.y
			    + this->m_pos.y * other.m_up.y + this->m_pos.z * other.m_at.y
			    + other.m_pos.y;
			result.m_pos.z = this->m_pos.x * other.m_right.z
			    + this->m_pos.y * other.m_up.z + this->m_pos.z * other.m_at.z
			    + other.m_pos.z;

			return result;
		}

		void operator*=(const Matrix44& other) {
			float tempX, tempY, tempZ;

			tempX = this->m_right.x * other.m_right.x
			    + this->m_right.y * other.m_up.x + this->m_right.z * other.m_at.x;
			tempY = this->m_right.x * other.m_right.y
			    + this->m_right.y * other.m_up.y + this->m_right.z * other.m_at.y;
			tempZ = this->m_right.x * other.m_right.z
			    + this->m_right.y * other.m_up.z + this->m_right.z * other.m_at.z;
			m_right = {tempX, tempY, tempZ, 0.0f};

			tempX = this->m_up.x * other.m_right.x + this->m_up.y * other.m_up.x
			    + this->m_up.z * other.m_at.x;
			tempY = this->m_up.x * other.m_right.y + this->m_up.y * other.m_up.y
			    + this->m_up.z * other.m_at.y;
			tempZ = this->m_up.x * other.m_right.z + this->m_up.y * other.m_up.z
			    + this->m_up.z * other.m_at.z;
			m_up = {tempX, tempY, tempZ, 0.0f};

			tempX = this->m_at.x * other.m_right.x + this->m_at.y * other.m_up.x
			    + this->m_at.z * other.m_at.x;
			tempY = this->m_at.x * other.m_right.y + this->m_at.y * other.m_up.y
			    + this->m_at.z * other.m_at.y;
			tempZ = this->m_at.x * other.m_right.z + this->m_at.y * other.m_up.z
			    + this->m_at.z * other.m_at.z;
			m_at = {tempX, tempY, tempZ, 0.0f};

			tempX = this->m_pos.x * other.m_right.x + this->m_pos.y * other.m_up.x
			    + this->m_pos.z * other.m_at.x + other.m_pos.x;
			tempY = this->m_pos.x * other.m_right.y + this->m_pos.y * other.m_up.y
			    + this->m_pos.z * other.m_at.y + other.m_pos.y;
			tempZ = this->m_pos.x * other.m_right.z + this->m_pos.y * other.m_up.z
			    + this->m_pos.z * other.m_at.z + other.m_pos.z;
			m_pos = {tempX, tempY, tempZ, 1.0f};
		}

		void set_rotate(const rage::vector3& angle) {
			float cX = cos(angle.x);
			float sX = sin(angle.x);
			float cY = cos(angle.y);
			float sY = sin(angle.y);
			float cZ = cos(angle.z);
			float sZ = sin(angle.z);

			m_right.x = cZ * cY - (sZ * sX) * sY;
			m_right.y = (cZ * sX) * sY + sZ * cY;
			m_right.z = -cX * sY;

			m_up.x = -sZ * cX;
			m_up.y = cZ * cX;
			m_up.z = sX;

			m_at.x = (sZ * sX) * cY + cZ * sY;
			m_at.y = sZ * sY - (cZ * sX) * cY;
			m_at.z = cX * cY;
		}

		rage::vector3 get_rotation() const {
			Quaternion quat = matrix_to_quaternion();
			return quaternion_to_euler_angles(quat);
		}

		Quaternion matrix_to_quaternion() const {
			float trace = m_right.x + m_up.y + m_at.z;
			float qx, qy, qz, qw;

			if (trace > 0) {
				float S = sqrt(trace + 1.0f) * 2.0f;
				qw      = 0.25f * S;
				qx      = (m_up.z - m_at.y) / S;
				qy      = (m_at.x - m_right.z) / S;
				qz      = (m_right.y - m_up.x) / S;
			} else if (m_right.x > m_up.y && m_right.x > m_at.z) {
				float S = sqrt(1.0f + m_right.x - m_up.y - m_at.z) * 2.0f;
				qw      = (m_up.z - m_at.y) / S;
				qx      = 0.25f * S;
				qy      = (m_up.x + m_right.y) / S;
				qz      = (m_at.x + m_right.z) / S;
			} else if (m_up.y > m_at.z) {
				float S = sqrt(1.0f + m_up.y - m_right.x - m_at.z) * 2.0f;
				qw      = (m_at.x - m_right.z) / S;
				qx      = (m_up.x + m_right.y) / S;
				qy      = 0.25f * S;
				qz      = (m_at.y + m_up.z) / S;
			} else {
				float S = sqrt(1.0f + m_at.z - m_right.x - m_up.y) * 2.0f;
				qw      = (m_right.y - m_up.x) / S;
				qx      = (m_at.x + m_right.z) / S;
				qy      = (m_at.y + m_up.z) / S;
				qz      = 0.25f * S;
			}

			return Quaternion(qx, qy, qz, qw);
		}

		rage::vector3 quaternion_to_euler_angles(const Quaternion& quat) const {
			rage::vector3 angles;

			float w = quat.m_w, x = quat.m_x, y = quat.m_y, z = quat.m_z;

			float r11 = 1.0f - 2.0f * (y * y + z * z);
			float r12 = 2.0f * (x * y + w * z);
			float r13 = 2.0f * (x * z - w * y);
			float r21 = 2.0f * (x * y - w * z);
			float r22 = 1.0f - 2.0f * (x * x + z * z);
			float r23 = 2.0f * (y * z + w * x);
			float r31 = 2.0f * (x * z + w * y);
			float r32 = 2.0f * (y * z - w * x);
			float r33 = 1.0f - 2.0f * (x * x + y * y);

			float clampedR23 = r23;
			if (clampedR23 > 1.0f)
				clampedR23 = 1.0f;
			if (clampedR23 < -1.0f)
				clampedR23 = -1.0f;
			angles.x = asin(clampedR23);

			if (fabs(r23) < 0.99999f) {
				angles.y = atan2(-r13, r33);
				angles.z = atan2(-r21, r22);
			} else {
				angles.y = 0.0f;
				angles.z = atan2(r12, r11);
			}

			return angles;
		}
	};
	static_assert(sizeof(Matrix44) == 0x40);

	static inline rage::vector3 operator*(const Matrix44& mat, const rage::vector3& vec) {
		return rage::vector3(mat.m_right.x * vec.x + mat.m_up.x * vec.y + mat.m_at.x * vec.z
		                   + mat.m_pos.x,
		               mat.m_right.y * vec.x + mat.m_up.y * vec.y + mat.m_at.y * vec.z
		                   + mat.m_pos.y,
		               mat.m_right.z * vec.x + mat.m_up.z * vec.y + mat.m_at.z * vec.z
		                   + mat.m_pos.z);
	}
}