#pragma once

namespace tEngine
{
	class System
	{
	public:
		virtual ~System() = default;
		virtual void Update(float deltaTime) = 0; // must override
	};
}
