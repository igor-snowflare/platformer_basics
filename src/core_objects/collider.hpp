/* ===============================================================================================

A generic Collider object to be used for handling Game Objects Physics
	- Vector 2 size is provided in World Units and as such is dependent on
	collision_config's blockSize

=============================================================================================== */

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
	
	int horizontalOriginsCount;
	float horizontalRaysSpacing;
	int verticalOriginsCount;
	float verticalRaysSpacing;
};