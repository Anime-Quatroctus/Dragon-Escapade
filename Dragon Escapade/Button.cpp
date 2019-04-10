#include "Button.h"
#include <SDL.h>

Button::Button(int x, int y, int width, int height, void *onPress) {
	Button::destRect = SDL_Rect{x, y, width, height};
	Button::onPress = onPress;
}

Button::Button(SDL_Rect destRect, void *onPress) {
	Button::destRect = destRect;
	Button::onPress = onPress;
}

void checkPress(Game *game) {

}
