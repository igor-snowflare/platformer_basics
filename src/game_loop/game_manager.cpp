#include "game_manager.hpp"

GameManager::GameManager(std::string_view title, int width, int height, bool fullscreen) : engine(title, width, height, fullscreen), game() {
	std::cout << "Game manager initialization complete!" << std::endl;
}

void GameManager::render() {
	game.render(engine.getRenderer());
}