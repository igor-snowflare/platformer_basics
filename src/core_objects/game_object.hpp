/* ===============================================================================================

A generic Game Object to be reused for both player and enemies.
	- Has Collider object for handling physics
	- Has Vector2 position member for determining position
		- Position is provided in float datatypes and translates to absolute
		coordinates on the screen

=============================================================================================== */

#pragma once
#include "primitives/vector_2.hpp"
#include "collider.hpp"

class GameObject {
public:
	GameObject(float initPosX, float initPosY, float sizeX, float sizeY, int _direction=1);
	Vector2 position;
	Collider collider;

	void testHorizontalCollision(float distance);
	void testVerticalCollision(float distance, int direction);

protected:
	int direction;
};