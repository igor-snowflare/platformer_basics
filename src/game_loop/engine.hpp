#pragma once

#include <SDL3/SDL.h>
#include <string>
#include <iostream>

class Engine {
public:
	Engine(std::string_view title, int width, int height, bool fullscreen);
	bool running();
	void handleEvents();
	void render();

private:
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};