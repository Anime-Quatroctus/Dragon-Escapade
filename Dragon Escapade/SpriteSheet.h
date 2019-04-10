#ifndef SPRITE_H
#define SPRITE_H

#include <SDL.h>

class SpriteSheet {
	
	int spriteWidth, spriteHeight, width, height;
	SDL_Texture *texture;

public:
	SpriteSheet(SDL_Texture *texture, int spriteWidth, int spriteHeight, int width, int height);

	SDL_Rect getSrc(int x, int y);
	SDL_Rect createDest(int xPos, int yPos, double xScale, double yScale);

	SDL_Texture * & getTexture() { return texture; }

};

#endif