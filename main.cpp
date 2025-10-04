#include <iostream>

#include "configs/window_configs.hpp"
#include "game_loop/game.hpp"
#include "game_loop/game_manager.hpp"
#include "src/core_objects/game_object.hpp"
#include "src/core_objects/world/room.hpp"

int main() {
	// Initialize the player (manually for now, improve later)
	Player player = Player(0, 0, 1, 1);
	std::cout << "Player object created..." << std::endl;

	// Initialize the game manager
	GameManager gameManager = GameManager(player);
	std::cout << "Game Manager created..." << std::endl;

	// Initialize the game
	Game game = Game(windowTitle, screenWidth, screenHeight, false, gameManager);


	// Generate the test room
	Room testRoom = Room(10, 6, 20, 12);

	//game.addRoom(testRoom);

	while (game.running()) {
		game.handleEvents();
		game.render();
	}

	return 0;
}