#pragma once

#include <unordered_map>
#include "System.hpp"
#include "SFML/Graphics.hpp"

namespace tEngine
{
	enum KeyState
	{
		KeyNone,
		KeyDown,
		KeyHold,
		KeyUp
	};

	class InputSystem : public System
	{
	private:
		std::unordered_map<sf::Keyboard::Key, KeyState> keyStates;
		std::unordered_map<sf::Keyboard::Key, bool> prevKeyStates;

	public:
		void Update(float deltaTime) override;
		KeyState GetKeyState(sf::Keyboard::Key key);
		bool GetKeyDown(sf::Keyboard::Key key);
		bool GetKey(sf::Keyboard::Key key);
		bool GetKeyUp(sf::Keyboard::Key key);
	};
}
