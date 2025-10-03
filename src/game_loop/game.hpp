#pragma once

#include <SDL3/SDL.h>
#include <string>
#include <iostream>

class Game {
public:
	Game(std::string_view title, int width, int height, bool fullscreen);
	bool Running();

private:
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};