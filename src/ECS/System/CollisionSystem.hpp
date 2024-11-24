#pragma once

#include<memory>
#include "System.hpp"
#include "../Entity/Entity.hpp"

namespace tEngine
{
	class CollisionSystem : public System
	{
	private:
		void HandleCollision(std::shared_ptr<Entity> e1, std::shared_ptr<Entity> e2);

	public:
		void Update(float deltaTime) override;
	};
}