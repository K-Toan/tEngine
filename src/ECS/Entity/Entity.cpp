#include "Entity.hpp"

namespace tEngine
{
	void Entity::AddComponent(std::shared_ptr<Component> component)
	{
		components.push_back(component);
	}

	template<typename T> std::shared_ptr<T> Entity::GetComponent()
	{
		for (auto& component : components)
		{
			if (std::shared_ptr<T> comp = std::dynamic_pointer_cast<T>(component))
			{
				return comp;
			}
		}
		return nullptr;
	}

	bool Entity::IsAlive() const
	{
		return alive;
	}

	const size_t Entity::GetId() const
	{
		return id;
	}

	const std::string& Entity::GetTag() const
	{
		return tag;
	}

	void Entity::destroy()
	{
		alive = false;
	}
}