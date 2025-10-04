#pragma once

#include "game_object.hpp"

class Player : public GameObject {
public:
	Player(float initPosX, float initPosY, float sizeX, float sizeY);
};