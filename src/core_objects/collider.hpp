#pragma once
#include "../../configs/collision_configs.hpp"
#include <vector>

#include "primitives/vector_2.hpp"

class Collider {

public:
	Collider(float _sizeX, float _sizeY);
	Vector2 getSize();

	void raycastX(int direction, float distance, Vector2 position);
	void raycastY(int direction, float distance, Vector2 position);

private:
	Vector2 size;
};