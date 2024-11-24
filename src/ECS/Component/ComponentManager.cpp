#include <memory>
#include <vector>
#include "ComponentManager.hpp"

namespace tEngine
{
	template <typename T> void ComponentManager::AddComponent(const std::shared_ptr<T>& component)
	{
		m_components[typeid(T)].push_back(component);
	}

	template <typename T> std::shared_ptr<T> ComponentManager::GetComponent()
	{
		auto it = m_components.find(typeid(T));

		if (it != m_components.end() && !it->second.empty())
		{
			return std::static_pointer_cast<T>(it->second.front());
		}

		return nullptr;
	}

	template <typename T> std::vector<std::shared_ptr<T>> ComponentManager::GetComponents()
	{
		std::vector<std::shared_ptr<T>> result;
		auto it = m_components.find(typeid(T));

		if (it != m_components.end())
		{
			for (auto& comp : it->second)
			{
				result.push_back(std::static_pointer_cast<T>(comp));
			}
		}

		return result;
	}
}