#pragma once
#include "SFML/Graphics.hpp"
#include "Entity.hpp"

namespace tEngine
{
	class System
	{
	public:
		virtual ~System() = default;
	};

	class SystemManager
	{

	};

	class Game
	{
	private:
		sf::RenderWindow m_window;
		sf::Clock m_clock;

		std::string m_windowName;
		unsigned int m_windowWidth;
		unsigned int m_windowHeight;

		bool m_isRunning;
		bool focus = false;
		bool enableVsync = false;
		bool limitFramerate = false;

		float deltaTime = 0;
		float timeScale = 1;
		float maxFramerate = 60;

		EntityManager m_entityManager;

	public:
		Game() : m_windowName("tEngine"), m_windowWidth(1280), m_windowHeight(720), m_isRunning(true) {}
		//Game(unsigned int width, unsigned int height, std::string name) : m_windowName(name), m_windowWidth(width), m_windowHeight(height), m_isRunning(true) {}

		~Game() = default;

		void initialize();
		void run();
		void handleEvents();
		void update();
		void render();
	};

	//class Input : public System
	//{

	//};
}
