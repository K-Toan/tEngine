#include "Entity.hpp"

namespace tEngine
{
	void EntityManager::update()
	{
		// remove inactive entities
		for (auto entity : m_entities)
		{
			// not implemented
		}

		// add entities
		for (auto entity : m_entitiesToAdd)
		{
			m_entities.push_back(entity);
			m_entityMap[entity->getTag()].push_back(entity);
		}

		// clear adding entities
		m_entitiesToAdd.clear();
	}

	std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag)
	{
		// create entity
		auto entity = std::make_shared<Entity>();

		// add entity to queue vector
		m_entitiesToAdd.push_back(entity);

		return entity;
	}

	EntityVector& EntityManager::getEntities()
	{
		return m_entities;
	}

	EntityVector& EntityManager::getEntities(const std::string& tag)
	{
		return m_entityMap[tag];
	}
}