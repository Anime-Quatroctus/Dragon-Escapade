#ifndef BUTTON_H
#define BUTTON_H
#include <SDL.h>
#include "Input.h"

class Button {

	SDL_Rect destRect;
	void (*onPress)(void *game);

public:
	Button(int x, int y, int width, int height, void (*onPress)(void *game));
	Button(SDL_Rect destRect, void(*onPress)(void *game));

	virtual void press(void *game) { onPress(game); }
	virtual void render(SDL_Renderer *renderer) {}
	bool checkPress(Mouse mouse);

};

#endif