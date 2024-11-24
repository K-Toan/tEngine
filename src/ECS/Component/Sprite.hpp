#pragma once

#include "SFML/Graphics.hpp"

namespace tEngine
{
	class Sprite
	{
    public:
        sf::Sprite sprite;
        sf::Texture texture;
        Sprite(const std::string& filePath);
        void SetSizeBasedOnWindow(const sf::RenderWindow& window);
        void SetSize(float width, float height);
        void SetPosition(float x, float y);
        sf::Sprite& GetSprite();
	};
}