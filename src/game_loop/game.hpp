#pragma once

#include <SDL3/SDL.h>
#include <string>
#include <iostream>
#include "game_manager.hpp"
#include "core_objects/player.hpp"

class Game {
public:
	Game(std::string_view title, int width, int height, bool fullscreen, GameManager& _gameManager);

	GameManager& gameManager;
	bool running();
	void handleEvents();
	void render();

	void initGameManager(GameManager& _gameManager);

private:
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};