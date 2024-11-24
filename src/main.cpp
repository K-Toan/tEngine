#include "ECS/System/Game.hpp"

int main()
{
    tEngine::Game game;

    game.Initialize();
    game.Run();

    return 0;
}
