#include "RenderSystem.hpp"
#include "../Component/Sprite.hpp"
#include "../Component/Transform2D.hpp"
#include "SFML/Graphics.hpp"

namespace tEngine
{
    void RenderSystem::Render(sf::RenderWindow& window)
    {
        //for (auto& entity : entities)
        //{
        //    auto spriteComponent = entity->GetComponent<Sprite>();
        //    auto transform2DComponent = entity->GetComponent<Transform2D>();
        //    if (spriteComponent && transformComponent)
        //    {
        //        spriteComponent->sprite.setPosition(transformComponent->position);
        //        window.draw(spriteComponent->sprite);
        //    }
        //}
    }

    void RenderSystem::Update(float deltaTime)
    {
        (void)deltaTime; // Suppress unused parameter warning
        // Future animation update logic can use deltaTime here
    }
}