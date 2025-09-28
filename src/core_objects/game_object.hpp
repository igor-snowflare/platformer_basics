#pragma once
#include "primitives/vector_2.hpp"
#include "collider.hpp"

class GameObject {
public:
	GameObject(float initPosX, float initPosY, float sizeX, float sizeY);
	Vector2 position;
	Collider collider;

	void testHorizontalCollision(float distance);

private:
	int direction;
};