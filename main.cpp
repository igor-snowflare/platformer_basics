#include <iostream>

#include "src/core_objects/game_object.hpp"

int main() {
	GameObject testObject = GameObject(0, 0, 1, 1);
	testObject.testVerticalCollision(0.3, 1);
	return 0;
}