#ifndef ImageHandler_H
#define ImageHandler_H

#include <SDL.h>
#include <string>
#include "Game.h"

// Used to determine which SDL_Texture* the image should be put in.
#define SPRITE 0

class ImageHandler {

	Game *game;

	int spritePosition;
	SDL_Texture **sprites;

public:
	ImageHandler(int spriteCount);
	~ImageHandler();

	int loadTexture(std::string path, int arr);

};

#endif