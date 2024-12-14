#include "Game.hpp"

#include <iostream>
#include <string>

namespace tEngine
{
	void Game::Initialize()
	{
		window.create(sf::VideoMode(windowWidth, windowHeight), windowName);

		// do not use this method
		// window.setFramerateLimit(60);
	}

	void Game::Run()
	{
		float deltaTime = 0.0f;

		// main game loop
		while (isRunning)
		{
			deltaTime = clock.restart().asSeconds();

			HandleEvents();
			Update(deltaTime);
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

	void Game::Update(float deltaTime)
	{

	}

	void Game::Render()
	{
		renderSystem.Render(window);
	}
}
