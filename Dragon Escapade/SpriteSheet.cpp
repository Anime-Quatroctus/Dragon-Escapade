#include "SpriteSheet.h"

SpriteSheet::SpriteSheet(SDL_Texture *texture, int spriteWidth, int spriteHeight, int width, int height) {
	SpriteSheet::texture = texture;
	SpriteSheet::spriteWidth = spriteWidth;
	SpriteSheet::width = width;
	SpriteSheet::height = height;
}

SDL_Rect SpriteSheet::getSrc(int x, int y) {
	return SDL_Rect{ x*spriteWidth, y*spriteHeight, spriteWidth, spriteHeight };
}

SDL_Rect SpriteSheet::createDest(int xPos, int yPos, double xScale, double yScale) {
	return SDL_Rect{xPos, yPos, (int) (spriteWidth * xScale), (int) (spriteHeight * yScale)};
}
