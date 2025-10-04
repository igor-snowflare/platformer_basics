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