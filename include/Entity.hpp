#pragma once
#include <map>
#include <string>
#include <memory>
#include <vector>

namespace tEngine
{
	class Entity
	{
	private:
		size_t m_id = 0;
		std::string m_tag = "Default";
		bool m_alive = true;
		friend class EntityManager;

	public:
		Entity() {}
		Entity(const size_t id, const std::string& tag) : m_id(id), m_tag(tag), m_alive(true) {}

		bool isAlive() const;
		const size_t getId() const;
		const std::string& getTag() const;
		void destroy();

	};

	typedef std::vector<std::shared_ptr<Entity>> EntityVector;
	typedef std::map<std::string, EntityVector> EntityMap;

	class EntityManager
	{
	private:
		EntityVector m_entities;
		EntityVector m_entitiesToAdd;
		EntityMap m_entityMap;
		size_t m_totalEntities = 0;

	public:
		EntityManager() {}
		~EntityManager() {}

		void update();
		std::shared_ptr<Entity> addEntity(const std::string& tag);
		EntityVector& getEntities();
		EntityVector& getEntities(const std::string& tag);
	};
}