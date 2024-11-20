#pragma once
namespace tEngine
{
	class Vector2
	{
	public:
		float x = 0;
		float y = 0;

		// constructor
		Vector2() {}
		Vector2(float xInput, float yInput) : x(xInput), y(yInput) {}

		// basic operations
		Vector2 operator + (const Vector2& other) const;
		Vector2 operator - (const Vector2& other) const;
		Vector2 operator * (float scalar) const;
		Vector2 operator / (float scalar) const;

		// compound assignment operators
		Vector2& operator += (const Vector2& other);
		Vector2& operator -= (const Vector2& other);
		Vector2& operator *= (float scalar);
		Vector2& operator /= (float scalar);

		// additional operations
		float dot(const Vector2& other) const;
		float cross(const Vector2& other) const;
		float distance(const Vector2& other) const;

		// utility methods
		Vector2& add(const Vector2& other);
		Vector2& minus(const Vector2& other);
		Vector2& multiple(float scalar);
		Vector2& divide(float scalar);
		Vector2& rotate(float angle);

		float length() const;
		Vector2 normalized() const;

	};
}
