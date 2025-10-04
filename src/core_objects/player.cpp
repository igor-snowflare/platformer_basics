#include "player.hpp"

Player::Player(float initPosX, float initPosY, float sizeX, float sizeY) : GameObject(initPosX, initPosY, sizeX, sizeY) {
	std::cout << "Player object generated..." << std::endl;
}