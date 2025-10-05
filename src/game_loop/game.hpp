#pragma once

#include <iostream>
#include <vector>
#include <SDL3/SDL.h>
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

	void render(SDL_Renderer* renderer);
};