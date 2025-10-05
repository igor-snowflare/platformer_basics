/* ===============================================================================================

A generic Room object that will own the tileset and in future play a role in camera
movement
	- Both position and size are provided in World Units and as such are dependent on
	collision_config's blockSize

=============================================================================================== */

#pragma once

#include <iostream>
#include <vector>
#include <SDL3/SDL.h>
#include "core_objects/primitives/vector_2.hpp"
#include "core_objects/primitives/bounds.hpp"
#include "../../../configs/collision_configs.hpp"

class Room {
public:
	Room(int posX, int posY, int sizeX, int sizeY);
	Vector2 getSize();
	Vector2 getPosition();
	Bounds getBounds();

	void updateTileValue(int x, int y, bool newValue);
	void renderTiles(SDL_Renderer* renderer);

private:
	Vector2 size;
	Vector2 position;
	Bounds bounds;

	std::vector<bool> tiles;
	Vector2 tileOffset;
};