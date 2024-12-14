#pragma once

#include "SFML/Graphics.hpp"
#include "InputSystem.hpp"
#include "RenderSystem.hpp"

namespace tEngine
{
	typedef std::string string;

	class Game
	{
	private:
		sf::RenderWindow window;
		sf::Clock clock;

		string windowName;
		unsigned int windowWidth;
		unsigned int windowHeight;

		bool isRunning;
		bool focus = false;
		bool enableVsync = false;
		bool limitFramerate = false;

		float maxFramerate = 60;

		//EntityManager entityManager;
		//SystemManager systemManager;
		InputSystem inputSystem;
		RenderSystem renderSystem;

	public:
		float deltaTime = 0;
		float timeScale = 1;

		Game() : windowName("tEngine"), windowWidth(1280), windowHeight(720), isRunning(true) {}
		~Game() = default;

		void Initialize();
		void Run();
		void HandleEvents();
		void Update(float deltaTime);
		void Render();
	};
}