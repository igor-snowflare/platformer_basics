#include "room.hpp"

Room::Room(int posX, int posY, int sizeX, int sizeY) :
	position(posX * blockSize, posY * blockSize),
	size(sizeX * blockSize, sizeY * blockSize),
	tiles(sizeX * sizeY, false),
	tileOffset(position.x - (size.x / 2), position.y - (size.y / 2))
{
	// Determine the bounds
	bounds.xMax = position.x + (size.x / 2);
	bounds.xMin = position.x - (size.x / 2);
	bounds.yMax = position.y + (size.y / 2);
	bounds.yMin = position.y - (size.y / 2);

	//std::cout << "I generated " << sizeX * sizeY << " tiles" << std::endl;
	std::cout << "My offsets are " << tileOffset.x << ", " << tileOffset.y << std::endl;

	//std::cout << "Room initialized on position " << position.x << ", " << position.y << " and with size of " << size.x << ", " << size.y << std::endl;
	//std::cout << "My bounds are as follows:" << std::endl;
	//std::cout << "Max X: " << bounds.xMax << std::endl;
	//std::cout << "Min X: " << bounds.xMin << std::endl;
	//std::cout << "Max Y: " << bounds.yMax << std::endl;
	//std::cout << "Min Y: " << bounds.yMin << std::endl;
}

Vector2 Room::getSize() { return size; }
Vector2 Room::getPosition() { return position; }
Bounds Room::getBounds() { return bounds; }

void Room::updateTileValue(int x, int y, bool newValue) {
	int targetIndex = (y * (size.x / blockSize)) + x;
	//std::cout << "Updating a tile on the index of " << targetIndex << std::endl;
	tiles[targetIndex] = newValue;
}

void Room::renderTiles(SDL_Renderer* renderer) {
	int unitSizeX = size.x / blockSize;
	int unitSizeY = size.y / blockSize;

	for (int x=0; x < unitSizeX; x++) {
		for (int y=0; y < unitSizeY; y++) {
			int targetIndex = (y * unitSizeX) + x;

			if (tiles[targetIndex]) {
				float tilePosX = (x * blockSize) + tileOffset.x;
				float tilePosY = (y * blockSize) + tileOffset.y;

				SDL_FRect draw_position;
				draw_position.x = tilePosX;
				draw_position.y = tilePosY;
				draw_position.w = blockSize;
				draw_position.h = blockSize;

				SDL_SetRenderDrawColor(renderer, 105, 106, 136, 255);
				SDL_RenderFillRect(renderer, &draw_position);
			} else {
				float tilePosX = (x * blockSize) + tileOffset.x;
				float tilePosY = (y * blockSize) + tileOffset.y;

				SDL_FRect draw_position;
				draw_position.x = tilePosX;
				draw_position.y = tilePosY;
				draw_position.w = blockSize;
				draw_position.h = blockSize;

				SDL_SetRenderDrawColor(renderer, 78, 98, 114, 255);
				SDL_RenderRect(renderer, &draw_position);
			}
		}
	}

	// Temporarily draw room bounds
	SDL_FRect roomBoundary;
	roomBoundary.x = bounds.xMin;
	roomBoundary.y = bounds.yMin;
	roomBoundary.w = size.x;
	roomBoundary.h = size.y;

	//std::cout << "Boundary draw at coordinates " << roomBoundary.x << ", " << roomBoundary.y << std::endl;

	SDL_SetRenderDrawColor(renderer, 73, 188, 146, 255);
	SDL_RenderRect(renderer, &roomBoundary);
}