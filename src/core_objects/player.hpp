#pragma once

#include <iostream>
#include <SDL3/SDL.h>
#include "game_object.hpp"

class Player : public GameObject {
public:
	Player(float initPosX, float initPosY, float sizeX, float sizeY);
	void render(SDL_Renderer* renderer);
};