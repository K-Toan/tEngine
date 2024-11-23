#include "Entity.hpp"

namespace tEngine
{
	bool Entity::isAlive() const
	{
		return m_alive;
	}

	const size_t Entity::getId() const
	{
		return m_id;
	}

	const std::string& Entity::getTag() const
	{
		return m_tag;
	}

	void Entity::destroy()
	{
		m_alive = false;
	}
}