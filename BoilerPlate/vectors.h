#pragma once

namespace Engine
{
	namespace Math
	{
		class Vectors
		{
		public:
		
			Vectors();
			Vectors(float uniform);
			Vectors(float x, float y);

			float Length() const;
			float SquaredLength() const;
			float Vectors::Normalize();
			float Vectors::GetX();
			float Vectors::GetY();

			static Vectors Origin;

			/*const float GetX();
			const float GetY();
			*/

			///OPERADORES
			Vectors& operator=(const Vectors& rhs);
			Vectors& operator+=(const Vectors& rhs);
			Vectors& operator-=(const Vectors& rhs);
			Vectors& operator*=(const Vectors& rhs);
			Vectors& operator/=(const Vectors& rhs);
			Vectors operator+(const Vectors& rhs);
			Vectors operator-(const Vectors& rhs);
			Vectors operator-();
			Vectors operator*(const Vectors& rhs);
			Vectors operator/(const Vectors& rhs);
			bool operator==(const Vectors& rhs);
			bool operator!=(const Vectors& rhs);
			friend Vectors operator*(float scaleUnit, const Vectors& rhs);
			friend Vectors operator*(const Vectors& lhs, float scaleUnit);

		public:
			float m_x;
			float m_y;
			float m_length;
			float m_width;
			float m_height;
		};
	}
}
