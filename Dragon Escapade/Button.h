#ifndef BUTTON_H
#define BUTTON_H
#include <SDL.h>
#include "Input.h"

class Button {

	SDL_Rect destRect;

public:
	Button(int x, int y, int width, int height);
	Button(SDL_Rect destRect);

	virtual void render(SDL_Renderer *renderer) {}
	bool checkPress(Mouse mouse);

};

#endif