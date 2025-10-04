#include <iostream>

#include "collider.hpp"

Collider::Collider(float _sizeX, float _sizeY) : size(_sizeX * blockSize, _sizeY * blockSize) {
	horizontalOriginsCount = _sizeY * raysPerBlock;
	horizontalRaysSpacing = size.y / (horizontalOriginsCount - 1);
	verticalOriginsCount = _sizeX * raysPerBlock;
	verticalRaysSpacing = size.x / (verticalOriginsCount - 1);
}

Vector2 Collider::getSize() { return size; }

void Collider::raycastX(int direction, float distance, Vector2 position) {
	// Determine the origin points
	std::vector<Vector2> originPoints;

	//std::cout << "For my height of " << size.y << " pixels I need " << horizontalOriginsCount << " rays with distance of " << horizontalRaysSpacing << std::endl;

	float xPos = position.x + ((size.x / 2) * direction);
	float startY = position.y - (size.y / 2);

	for (int i=0; i < horizontalOriginsCount; i++) {
		float yPos = startY + (horizontalRaysSpacing * i);
		originPoints.push_back(Vector2(xPos, yPos));
		//std::cout << "I am casting a ray from coordinates " << xPos <<  ", " << yPos << std::endl;
	}
}

void Collider::raycastY(int direction, float distance, Vector2 position) {
	// Determine the origin points
	std::vector<Vector2> originPoints;

	//std::cout << "For my width of " << size.x << " pixels I need " << verticalOriginsCount << " rays with distance of " << verticalRaysSpacing << std::endl;

	float startX = position.x - (size.x / 2);
	float yPos = position.y + ((size.y / 2) * direction);

	for (int i=0; i < verticalOriginsCount; i++) {
		float xPos = startX + (verticalRaysSpacing * i);
		originPoints.push_back(Vector2(xPos, yPos));
		//std::cout << "I am casting a ray from coordinates " << xPos <<  ", " << yPos << std::endl;
	}
}