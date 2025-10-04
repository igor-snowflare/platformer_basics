#include "room.hpp"

Room::Room(int posX, int posY, int sizeX, int sizeY) :
	position(posX * blockSize, posY * blockSize),
	size(sizeX * blockSize, sizeY * blockSize)
{
	// Determine the bounds
	bounds.xMax = position.x + (size.x / 2);
	bounds.xMin = position.x - (size.x / 2);
	bounds.yMax = position.y + (size.y / 2);
	bounds.yMin = position.y - (size.y / 2);

	//std::cout << "Room initialized on position " << position.x << ", " << position.y << " and with size of " << size.x << ", " << size.y << std::endl;
	//std::cout << "My bounds are as follows:" << std::endl;
	//std::cout << "Max X: " << bounds.xMax << std::endl;
	//std::cout << "Min X: " << bounds.xMin << std::endl;
	//std::cout << "Max Y: " << bounds.yMax << std::endl;
	//std::cout << "Min Y: " << bounds.yMin << std::endl;
}

Vector2 Room::getSize() { return size; }
Vector2 Room::getPosition() { return position; }
Bounds Room::getBounds() const { return bounds; }