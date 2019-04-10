#include "ImageHandler.h"
#include <stdlib.h>
#include <SDL_image.h>

ImageHandler::ImageHandler(int spriteCount) {
	ImageHandler::sprites = (SDL_Texture **)calloc(spriteCount, sizeof(SDL_Texture *));
}

ImageHandler::~ImageHandler() {
	delete ImageHandler::sprites;
}

int ImageHandler::loadTexture(std::string path, int arr) {
	SDL_Surface *surface = IMG_Load(path.c_str());
	if (!surface) return 1;
	SDL_Texture *texture = SDL_CreateTextureFromSurface(game->getRenderer(), surface);
	if (!texture) return 2;
	memcpy(sprites[spritePosition], texture, sizeof(SDL_Texture *));
	return 0;
}
