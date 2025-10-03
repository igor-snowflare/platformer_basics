#include <iostream>

#include "collider.hpp"

Collider::Collider(float _sizeX, float _sizeY) : size(_sizeX, _sizeY) {}

Vector2 Collider::getSize() { return size; }

void Collider::raycastX(int direction, float distance, Vector2 position) {
	// Determine the origin points
	std::vector<Vector2> originPoints;

	int originsCount = size.y * raysPerBlock;
	float raysSpacing = (size.y * blockSize) / (originsCount - 1);

	std::cout << "For my height of " << size.y << " units I need " << originsCount << " rays with distance of " << raysSpacing << std::endl;

	float xPos = position.x + (((size.x * blockSize) / 2) * direction);
	float startY = position.y - ((size.y * blockSize) / 2);

	for (int i=0; i < originsCount; i++) {
		float yPos = startY + (raysSpacing * i);
		originPoints.push_back(Vector2(xPos, yPos));
		std::cout << "I am casting a ray from coordinates " << xPos <<  ", " << yPos << std::endl;
	}
}

void Collider::raycastY(int direction, float distance, Vector2 position) {
	// Determine the origin points
	std::vector<Vector2> originPoints;

	int originsCount = size.x * raysPerBlock;
	float raysSpacing = (size.x * blockSize) / (originsCount - 1);

	std::cout << "For my width of " << size.x << " units I need " << originsCount << " rays with distance of " << raysSpacing << std::endl;

	float startX = position.x - ((size.x * blockSize) / 2);
	float yPos = position.y + (((size.y * blockSize) / 2) * direction);

	for (int i=0; i < originsCount; i++) {
		float xPos = startX + (raysSpacing * i);
		originPoints.push_back(Vector2(xPos, yPos));
		std::cout << "I am casting a ray from coordinates " << xPos <<  ", " << yPos << std::endl;
	}
}