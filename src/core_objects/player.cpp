#include "player.hpp"

Player::Player(float initPosX, float initPosY, float sizeX, float sizeY) : GameObject(initPosX, initPosY, sizeX, sizeY) {
	std::cout << "Player object generated at position " << position.x << ", " << position.y << std::endl;
	std::cout << "Player size is " << collider.getSize().x << ", " << collider.getSize().y << std::endl;
}

void Player::render(SDL_Renderer* renderer) {
	SDL_FRect draw_position;
	draw_position.x = position.x - (collider.getSize().x / 2);
	draw_position.y = position.y - (collider.getSize().y / 2);
	draw_position.w = collider.getSize().x;
	draw_position.h = collider.getSize().y;

	SDL_SetRenderDrawColor(renderer, 142, 72, 83, 255);
	SDL_RenderFillRect(renderer, &draw_position);
}