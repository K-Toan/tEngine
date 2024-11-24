#include "Entity.hpp"
#include "EntityManager.hpp"

namespace tEngine
{
	void EntityManager::Update()
	{
		// remove inactive entities
		for (auto entity : m_entities)
		{
			//------------------------------------------------------------------------------------not implemented------------------------------------------------------------------------------------
		}

		// add entities
		for (auto entity : m_entitiesToAdd)
		{
			m_entities.push_back(entity);
			m_entityMap[entity->GetTag()].push_back(entity);
		}

		// clear adding entities
		m_entitiesToAdd.clear();
	}

	void EntityManager::AddEntity(const std::string& tag)
	{
		// create entity
		auto entity = std::make_shared<Entity>();

		// add entity to queue vector
		m_entitiesToAdd.push_back(entity);
	}

	void EntityManager::RemoveEntity(size_t entityId)
	{
		//------------------------------------------------------------------------------------not implemented------------------------------------------------------------------------------------
	}

	EntityVector& EntityManager::GetEntities()
	{
		return m_entities;
	}

	EntityVector& EntityManager::GetEntitiesByTag(const std::string& tag)
	{
		return m_entityMap[tag];
	}
}