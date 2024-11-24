#include "InputSystem.hpp"

namespace tEngine
{
	void InputSystem::Update(float deltaTime)
	{
		for (int key = sf::Keyboard::A; key <= sf::Keyboard::KeyCount; ++key)
		{
			sf::Keyboard::Key currentKey = static_cast<sf::Keyboard::Key>(key);
			bool isKeyPressed = sf::Keyboard::isKeyPressed(currentKey);

			if (isKeyPressed)
			{
				if (prevKeyStates[currentKey])
				{
					keyStates[currentKey] = KeyHold;
				}
				else
				{
					keyStates[currentKey] = KeyDown;
				}
			}
			else
			{
				if (prevKeyStates[currentKey])
				{
					keyStates[currentKey] = KeyUp;
				}
				else
				{
					keyStates[currentKey] = KeyNone;
				}
			}

			prevKeyStates[currentKey] = isKeyPressed;
		}
	}

	KeyState InputSystem::GetKeyState(sf::Keyboard::Key key)
	{
		if (keyStates.find(key) != keyStates.end())
		{
			return keyStates[key];
		}
		return KeyNone;
	}

	bool InputSystem::GetKeyDown(sf::Keyboard::Key key)
	{
		return keyStates[key] == KeyDown;
	}

	bool InputSystem::GetKey(sf::Keyboard::Key key)
	{
		return keyStates[key] == KeyHold;
	}

	bool InputSystem::GetKeyUp(sf::Keyboard::Key key)
	{
		return keyStates[key] == KeyUp;
	}
}
