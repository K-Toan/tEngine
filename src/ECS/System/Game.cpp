#include "Game.hpp"

namespace tEngine
{
	void Game::Initialize()
	{
		window.create(sf::VideoMode(windowWidth, windowHeight), windowName);
		window.setFramerateLimit(60);
	}

	void Game::Run()
	{
		// main game loop
		while (isRunning)
		{
			HandleEvents();
			Update();
			Render();
		}
	}

	void Game::HandleEvents()
	{
		deltaTime = clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				isRunning = false;
				window.close();
			}
		}

		inputSystem.Update(deltaTime);
	}

	void Game::Update()
	{

	}

	void Game::Render()
	{
		renderSystem.Update(deltaTime);
		window.clear();
		window.display();
	}
}