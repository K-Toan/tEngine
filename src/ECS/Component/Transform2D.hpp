#include "Component.hpp"
#include "../../Utility/Vector2D.hpp"

namespace tEngine
{
	class Transform2D : public Component
	{
	public:
		Vector2D position;
		Vector2D rotation;
		Vector2D scale;

		Transform2D() : position(0, 0), rotation(0, 0), scale(1, 1) {}
		Transform2D(const Vector2D& p, const Vector2D& r, const Vector2D& s) : position(p), rotation(r), scale(s) {}

		Vector2D GetPosition() const;
		Vector2D GetRotation() const;
		Vector2D GetScale () const;
		void SetPosition(const Vector2D& p);
		void SetRotation(const Vector2D& r);
		void SetScale(const Vector2D& s);
	};
}
