#ifndef BUTTON_H
#define BUTTON_H
#include "Game.h"

class Button {

	SDL_Rect destRect;
	void *onPress;

public:
	Button(int x, int y, int width, int height, void *onPress);
	Button(SDL_Rect destRect, void *onPress);

	virtual void render(Game *game) {}

	void checkPress(Game *game);

};

#endif