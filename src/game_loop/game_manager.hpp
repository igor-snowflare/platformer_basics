#pragma once

#include <iostream>
#include <vector>
#include "game.hpp"
#include "engine.hpp"

class GameManager {
public:
	GameManager(std::string_view title, int width, int height, bool fullscreen);
	Engine engine;
	Game game;
	void render();
	
};