#pragma once
#include <memory>
#include <vector>
#include <typeindex>
#include <unordered_map>
#include "SFML/Main.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "Utility.hpp"

namespace tEngine
{
	class Component
	{
	public:
		virtual ~Component() = default;
	};

	class ComponentManager
	{
	private:
		size_t totalComponents = 0;
		std::unordered_map<std::type_index, std::vector<std::shared_ptr<Component>>> m_components;

	public:
		template <typename T> void addComponent(const std::shared_ptr<T>& component)
		{
			m_components[typeid(T)].push_back(component);
		}

		template <typename T> std::shared_ptr<T> getComponent()
		{
			auto it = m_components.find(typeid(T));

			if (it != m_components.end() && !it->second.empty())
			{
				return std::static_pointer_cast<T>(it->second.front());
			}

			return nullptr;
		}

		template <typename T> std::vector<std::shared_ptr<T>> getComponents()
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
	};

	// redering components
	class SpriteRenderer : public Component
	{
	public:
		sf::Sprite sprite;

		SpriteRenderer() = default;
		SpriteRenderer(const sf::Sprite& spr) : sprite(spr) {}
	};

	// position and movement components
	class Transform2D : public Component
	{
	public:
		Vector2D position;
		Vector2D rotation;
		Vector2D velocity;
		Vector2D scale;

		Transform2D() : position(0, 0), rotation(0, 0), velocity(0, 0), scale(1, 1) {}
		Transform2D(const Vector2D& p, const Vector2D& r, const Vector2D& v, const Vector2D& s) : position(p), rotation(r), velocity(v), scale(s) {}
	};

	class Rigidbody2D : public Component
	{
		// not implemented
	};

	// collider & collision components
	class Collider2D : public Component
	{
	public:
		bool isEnabled = true;

		void onCollisionEnter2D();
		void onCollisionStay2D();
		void onCollisionExit2D();
	};

	class BoxCollider2D : public Collider2D
	{
	public:
		Vector2D size;

		BoxCollider2D() : size(Vector2D(1.0f, 1.0f)) {}
		BoxCollider2D(const Vector2D& s) : size(s) {}
	};

	class CircleCollider2D : public Collider2D
	{
	public:
		float radius;

		CircleCollider2D(float r) : radius(r) {}
	};

	class PolygonCollider2D : public Collider2D
	{
	public:
		std::vector<Vector2D> vertices;

		PolygonCollider2D(const std::vector<Vector2D>& verts) : vertices(verts) {}
	};

	// camera components
	class Camera : public Component
	{
	public:
		sf::View view;

		Camera() = default;
		Camera(const sf::View& v) : view(v) {}
	};

	// audio components
	class AudioSource : public Component
	{
	public:
		sf::Sound sound;

		AudioSource() = default;
		AudioSource(const sf::Sound& s) : sound(s) {}
	};
}