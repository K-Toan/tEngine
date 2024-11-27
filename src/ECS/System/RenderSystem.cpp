#include "RenderSystem.hpp"
#include "SFML/Graphics.hpp"

namespace tEngine
{
    void RenderSystem::Render(sf::RenderWindow& window)
    {
        window.clear();
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
        window.display();
    }

    void RenderSystem::Update(float deltaTime)
    {
        (void)deltaTime; // Suppress unused parameter warning
        // Future animation update logic can use deltaTime here
    }
}