#include <iostream>

#include "src/core_objects/game_object.hpp"

int main() {
	GameObject testObject = GameObject(0, 0, 1, 1);
	testObject.testHorizontalCollision(0.3);
	return 0;
}