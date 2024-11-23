#include "SFML/Graphics.hpp"
#include "System.hpp"
#include <iostream>

namespace tEngine
{
	sf::CircleShape circle(50.0f);

	void Game::initialize()
	{
		m_window.create(sf::VideoMode(m_windowWidth, m_windowHeight), m_windowName);

		circle.setPosition(sf::Vector2f(0.0f, 20.0f));
	}

	void Game::run()
	{
		// main game loop
		while (m_isRunning)
		{
			deltaTime = m_clock.restart().asSeconds();

			sf::Event event;
			while (m_window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					m_isRunning = false;
					m_window.close();
				}
			}
			//handleEvents();
			//update();
			render();
		}
	}

	void Game::handleEvents()
	{
		// not implemented
	}

	void Game::update()
	{
		// not implemented
	}

	void Game::render()
	{
		// render each entities
		// not implemented

		m_window.clear();
		m_window.draw(circle);
		m_window.display();
	}
}