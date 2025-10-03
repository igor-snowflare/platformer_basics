#include <iostream>

#include "configs/window_configs.hpp"
#include "src/game_loop/game.hpp"
#include "src/core_objects/game_object.hpp"

int main() {
	Game game = Game(windowTitle, screenWidth, screenHeight, false);
	GameObject testObject = GameObject(0, 0, 1, 1);
	testObject.testVerticalCollision(0.3, 1);
	return 0;
}