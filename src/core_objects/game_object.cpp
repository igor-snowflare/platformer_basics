#include <iostream>

#include "game_object.hpp"

GameObject::GameObject(float initPosX, float initPosY, float sizeX, float sizeY, int _direction) : 
	position(initPosX, initPosY),
	collider(sizeX, sizeY),
	direction(1)
{}

void GameObject::testHorizontalCollision(float distance) {
	std::cout << "I will raycast horizontally from position " << position.x << ", " << position.y << " and direction " << direction << std::endl;
	collider.raycastX(direction, distance, position);
}

void GameObject::testVerticalCollision(float distance, int direction) {
	std::cout << "I will raycast vertically from position " << position.x << ", " << position.y << " and direction " << direction << std::endl;
	collider.raycastY(direction, distance, position);
}