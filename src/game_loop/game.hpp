#pragma once

#include <iostream>
#include "core_objects/game_object.hpp"
#include "core_objects/player.hpp"
#include "core_objects/world/room.hpp"
#include "../configs/player_initialization_config.hpp"

class Game {
public:
	Game();
	Player player;
	std::vector<Room> rooms;
	Room* activeRoom;

	void addRoom(Room& targetRoom);
	void determineActiveRoom();
	Room* getActiveRoom();

};