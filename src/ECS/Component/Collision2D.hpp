#pragma once

#include "Component.hpp"
#include "SFML/Graphics.hpp"

namespace tEngine
{
    class Collision2D : public Component 
    {
    public:
        CollisionComponent(const sf::FloatRect& bounds);
        sf::FloatRect GetBounds() const;
        void SetBounds(const sf::FloatRect& bounds);

    private:
        sf::FloatRect bounds;
    };
}