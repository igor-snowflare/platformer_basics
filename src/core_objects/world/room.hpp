/* ===============================================================================================

A generic Room object that will own the tileset and in future play a role in camera
movement
	- Both position and size are provided in World Units and as such are dependent on
	collision_config's blockSize

=============================================================================================== */

#pragma once

#include <iostream>
#include "core_objects/primitives/vector_2.hpp"

class Room {
public:
	Room(int posX, int posY, int sizeX, int sizeY);
	Vector2 getSize();
	Vector2 getPosition();

private:
	Vector2 size;
	Vector2 position;
};