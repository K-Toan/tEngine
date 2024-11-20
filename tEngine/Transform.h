#pragma once
#include "Vector2.h"

class CTransform
{
public:
	Vector2 postition;
	Vector2 rotation;
	Vector2 velocity;
	Vector2 scale;

	CTransform() {}
	CTransform(const Vector2& p, const Vector2& r, const Vector2& v, const Vector2& s) : postition(p), rotation(r), velocity(v), scale(s) {}
};

