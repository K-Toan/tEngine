#include <memory>
#include <unordered_map>
#include <typeindex>
#include "Component.hpp"

namespace tEngine
{
	class ComponentManager
	{
	private:
		size_t totalComponents = 0;
		std::unordered_map<std::type_index, std::vector<std::shared_ptr<Component>>> m_components;

	public:
		template <typename T> void AddComponent(const std::shared_ptr<T>& component);
		template <typename T> std::shared_ptr<T> GetComponent();
		template <typename T> std::vector<std::shared_ptr<T>> GetComponents();
	};
}