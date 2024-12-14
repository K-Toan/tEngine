#pragma once

#include "SFML/Graphics.hpp"
#include "System.hpp"

namespace tEngine
{
	class RenderSystem : public System
	{
	public:
		void Update(float deltaTime) override;
		void Render(sf::RenderWindow& window);
	};
}
