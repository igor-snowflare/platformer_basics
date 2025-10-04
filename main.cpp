#include <iostream>

#include "configs/window_configs.hpp"
#include "game_loop/game_manager.hpp"

int main() {
	// Initialize the game
	GameManager gameManager = GameManager(windowTitle, screenWidth, screenHeight, false);

	// Generate the test room
	Room testRoom = Room(0, 0, 20, 12);

	gameManager.game.addRoom(testRoom);
	gameManager.game.determineActiveRoom();

	// Test if collisions still work following the rework
	/*)
	std::cout << "Horizontal collisions!" << std::endl;
	gameManager.game.player.testHorizontalCollision(1);
	std::cout << "=============================================" << std::endl;
	std::cout << "Vertical collisions!" << std::endl;
	gameManager.game.player.testVerticalCollision(1, 1);
	std::cout << "=============================================" << std::endl;
	*/

	while (gameManager.engine.running()) {
		gameManager.engine.handleEvents();
		gameManager.engine.render();
	}

	return 0;
}