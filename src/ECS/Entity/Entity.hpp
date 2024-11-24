#pragma once

#include <map>
#include <string>
#include <memory>
#include <vector>
#include "../Component/Component.hpp"

namespace tEngine
{
	typedef std::string string;

	class Entity
	{
	private:
		size_t id = 0;
		string tag = "Default";
		bool alive = true;

		std::vector<std::shared_ptr<Component>> components;

	public:
		Entity() {}
		Entity(const size_t id, const std::string& tag) : id(id), tag(tag), alive(true) {}

		const size_t GetId() const;
		const std::string& GetTag() const;
		void AddComponent(std::shared_ptr<Component> component);
		template<typename T> std::shared_ptr<T> GetComponent();
		bool IsAlive() const;
		void destroy();

	};
}