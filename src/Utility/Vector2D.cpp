#include <cmath>
#include "Vector2D.hpp"

namespace tEngine
{
	// basic operations
	Vector2D Vector2D::operator+(const Vector2D& other) const
	{
		return Vector2D(x + other.x, y + other.y);
	}

	Vector2D Vector2D::operator-(const Vector2D& other) const
	{
		return Vector2D(x - other.x, y - other.y);
	}

	Vector2D Vector2D::operator*(float scalar) const
	{
		return Vector2D(x * scalar, y * scalar);
	}

	Vector2D Vector2D::operator/(float scalar) const
	{
		return Vector2D(x / scalar, y / scalar);
	}

	// compound assignment operators
	Vector2D& Vector2D::operator+=(const Vector2D& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Vector2D& Vector2D::operator-=(const Vector2D& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Vector2D& Vector2D::operator*=(float scalar)
	{
		x *= scalar;
		y *= scalar;
		return *this;
	}

	Vector2D& Vector2D::operator/=(float scalar)
	{
		x /= scalar;
		y /= scalar;
		return *this;
	}

	// additional operations
	float Vector2D::dot(const Vector2D& other) const
	{
		return x * other.x + y * other.y;
	}

	float Vector2D::cross(const Vector2D& other) const
	{
		return x * other.y - y * other.x;
	}

	float Vector2D::distance(const Vector2D& other) const
	{
		float dx = x - other.x;
		float dy = y - other.y;
		return std::sqrt(dx * dx + dy * dy);
	}

	// utility methods
	Vector2D& Vector2D::add(const Vector2D& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Vector2D& Vector2D::minus(const Vector2D& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Vector2D& Vector2D::multiple(float scalar)
	{
		x *= scalar;
		y *= scalar;
		return *this;
	}

	Vector2D& Vector2D::divide(float scalar)
	{
		x /= scalar;
		y /= scalar;
		return *this;
	}

	Vector2D& Vector2D::rotate(float angle)
	{
		float cosAngle = std::cos(angle);
		float sinAngle = std::sin(angle);

		float newX = cosAngle * x - sinAngle * y;
		float newY = sinAngle * x + cosAngle * y;

		x = newX;
		y = newY;

		return *this;
	}

	float Vector2D::length() const
	{

		return std::sqrt(x * x + y * y);
	}

	Vector2D Vector2D::normalized() const
	{
		float l = length();

		return (l > 0) ? Vector2D(x / l, y / l) : Vector2D();
	}
}