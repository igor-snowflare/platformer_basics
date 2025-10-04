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
		std::cout << "Would initialize from blank" << std::endl;
	}
}

Room* Game::getActiveRoom() { return activeRoom; }
