#include "Button.h"
#include <SDL.h>

Button::Button(int x, int y, int width, int height, void(*onPress)(void *game)) {
	Button::destRect = SDL_Rect{x, y, width, height};
	Button::onPress = onPress;
}

Button::Button(SDL_Rect destRect, void(*onPress)(void *game)) {
	Button::destRect = destRect;
	Button::onPress = onPress;
}

bool Button::checkPress(Mouse mouse) {
	return  mouse.getX() >= destRect.x && mouse.getX() <= destRect.x + destRect.w && mouse.getY() >= destRect.y && mouse.getY() <= destRect.y + destRect.h;
}
