#include "room.hpp"

Room::Room(int posX, int posY, int sizeX, int sizeY) :
	position(posX, posY),
	size(sizeX, sizeY)
{ std::cout << "Room initialized on position " << position.x << ", " << position.y << " and with size of " << size.x << ", " << size.y << std::endl; }

Vector2 Room::getSize() { return size; }
Vector2 Room::getPosition() { return position; }