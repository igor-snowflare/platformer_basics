#include "game.hpp"

Game::Game() : player(playerPosX, playerPosY, playerSizeX, playerSizeY) {
	activeRoom = nullptr;
	std::cout << "Game object generated..." << std::endl;
}

void Game::addRoom(Room &targetRoom) {
	rooms.push_back(targetRoom);
	std::cout << "Another room has been added to the level!" << std::endl;
}

void Game::determineActiveRoom() {
	// Different execution depending on whether there is an active room right now
	if (activeRoom == nullptr) {
		// If no active room, loop through all available by constant reference for efficiency
		for (auto& room : rooms) {
			Bounds roomBounds = room.getBounds();

			if (player.position.x > room.getBounds().xMin && player.position.x < room.getBounds().xMax && player.position.y > room.getBounds().yMin && player.position.y < room.getBounds().yMax) {
				activeRoom = &room;
				std::cout << "I now have an active room!" << std::endl;
				break;
			}
		}
	}

	// Sanity check
	if (activeRoom == nullptr) {
		std::cout << "Assignment actually failed..." << std::endl;
	} else {
		std::cout << "Assignment confirmed as successful..." << std::endl;
	}
}

void Game::render(SDL_Renderer* renderer) {
	SDL_SetRenderDrawColor(renderer, 52, 72, 87, 255);
	SDL_RenderClear(renderer);
	activeRoom->renderTiles(renderer);
	player.render(renderer);
	player.collider.raycastY(1, 64, player.position, true, renderer);
	SDL_RenderPresent(renderer);
	// Second function to be added
	//renderPlayer()
}
