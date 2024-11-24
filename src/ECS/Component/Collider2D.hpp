#include <vector>
#include "Component.hpp"
#include "../../Utility/Vector2D.hpp"

namespace tEngine
{
	// -------------------------Base Collider2D------------------------- //
	class Collider2D : public Component
	{
	public:
		bool isEnabled = true;

		void OnCollisionEnter2D();
		void OnCollisionStay2D();
		void OnCollisionExit2D();
	};

	// -------------------------Box Collider2D------------------------- //
	class BoxCollider2D : public Collider2D
	{
	public:
		Vector2D size;

		BoxCollider2D() : size(Vector2D(1.0f, 1.0f)) {}
		BoxCollider2D(const Vector2D& s) : size(s) {}
	};


	// -------------------------Circle Collider2D------------------------- //
	class CircleCollider2D : public Collider2D
	{
	public:
		float radius;

		CircleCollider2D() : radius(1.0f) {}
		CircleCollider2D(float r) : radius(r) {}
	};


	// -------------------------Polygon Collider2D------------------------- //
	class PolygonCollider2D : public Collider2D
	{
	public:
		std::vector<Vector2D> vertices;

		PolygonCollider2D(const std::vector<Vector2D>& verts) : vertices(verts) {}
	};
}