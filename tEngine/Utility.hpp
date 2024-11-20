#pragma once
#include<memory.h>

namespace tEngine
{
	class Vector2D
	{
	public:
		float x = 0;
		float y = 0;

		// constructor
		Vector2D() {}
		Vector2D(float xInput, float yInput) : x(xInput), y(yInput) {}

		// basic operations
		Vector2D operator + (const Vector2D& other) const;
		Vector2D operator - (const Vector2D& other) const;
		Vector2D operator * (float scalar) const;
		Vector2D operator / (float scalar) const;

		// compound assignment operators
		Vector2D& operator += (const Vector2D& other);
		Vector2D& operator -= (const Vector2D& other);
		Vector2D& operator *= (float scalar);
		Vector2D& operator /= (float scalar);

		// additional operations
		float dot(const Vector2D& other) const;
		float cross(const Vector2D& other) const;
		float distance(const Vector2D& other) const;

		// utility methods
		Vector2D& add(const Vector2D& other);
		Vector2D& minus(const Vector2D& other);
		Vector2D& multiple(float scalar);
		Vector2D& divide(float scalar);
		Vector2D& rotate(float angle);

		float length() const;
		Vector2D normalized() const;

	};
}
