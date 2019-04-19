#include "Button.h"
#include <SDL.h>

Button::Button(int x, int y, int width, int height) {
	Button::destRect = SDL_Rect{x, y, width, height};
}

Button::Button(SDL_Rect destRect) {
	Button::destRect = destRect;
}

bool Button::checkPress(Mouse mouse) {
	return  mouse.getX() >= destRect.x && mouse.getX() <= destRect.x + destRect.w && mouse.getY() >= destRect.y && mouse.getY() <= destRect.y + destRect.h;
}
