#pragma once

#include <iostream>
#include <vector>
#include "core_objects/game_object.hpp"
#include "core_objects/player.hpp"
#include "core_objects/world/room.hpp"

class Game;

class GameManager {
public:
	GameManager(GameObject& _player);
	GameObject& player;
	std::vector<Room> rooms;
	Room* activeRoom;

	void addRoom(Room& targetRoom);
	void determineActiveRoom();
	Room* getActiveRoom();
};