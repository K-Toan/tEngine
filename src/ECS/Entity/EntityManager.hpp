#pragma once

#include <map>
#include <string>
#include <memory>
#include <vector>

namespace tEngine
{
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

		void Update();
		void AddEntity(const std::string& tag);
		void RemoveEntity(size_t entityId);
		EntityVector& GetEntities();
		EntityVector& GetEntitiesByTag(const std::string& tag);
	};
}