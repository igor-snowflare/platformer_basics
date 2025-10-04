#include "game_manager.hpp"

GameManager::GameManager(GameObject& _player) : player(_player) { activeRoom = nullptr; }

void GameManager::addRoom(Room &targetRoom) {
	rooms.push_back(targetRoom);
	std::cout << "Another room has been added to the level!" << std::endl;
}

void GameManager::determineActiveRoom() {
	// Different execution depending on whether there is an active room right now
	if (activeRoom == nullptr) {
		// If no active room, loop through all available by constant reference for efficiency
		std::cout << "Would initialize from blank" << std::endl;
	}
}

Room* GameManager::getActiveRoom() { return activeRoom; }