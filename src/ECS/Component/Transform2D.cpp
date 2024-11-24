#include "Transform2D.hpp"
#include "../../Utility/Vector2D.hpp"

namespace tEngine
{
	Vector2D Transform2D::GetPosition() const
	{
		return position;
	}

	Vector2D Transform2D::GetRotation() const
	{
		return rotation;
	}

	Vector2D Transform2D::GetScale() const
	{
		return scale;
	}

	void Transform2D::SetPosition(const Vector2D& p)
	{
		position = p;
	}

	void Transform2D::SetRotation(const Vector2D& r)
	{
		rotation = r;
	}

	void Transform2D::SetScale(const Vector2D& s)
	{
		scale = s;
	}
}
