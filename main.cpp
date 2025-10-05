#include <iostream>

#include "configs/window_configs.hpp"
#include "game_loop/game_manager.hpp"

int main() {
	// Initialize the game
	GameManager gameManager = GameManager(windowTitle, screenWidth, screenHeight, false);

	// Generate the test room
	Room testRoom = Room(11, 6, 20, 10);
	testRoom.updateTileValue(6, 8, true);
	testRoom.updateTileValue(7, 8, true);
	testRoom.updateTileValue(8, 8, true);
	testRoom.updateTileValue(9, 8, true);
	testRoom.updateTileValue(10, 8, true);
	testRoom.updateTileValue(11, 8, true);
	testRoom.updateTileValue(12, 8, true);
	testRoom.updateTileValue(13, 8, true);

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
		gameManager.render();
	}

	return 0;
}