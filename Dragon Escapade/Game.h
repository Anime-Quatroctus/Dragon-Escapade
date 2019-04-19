#ifndef GAME_H
#define GAME_H
#include <SDL.h>
class Game;
#include "State.h"
#include "Input.h"
#include <string>

class Game {

	Mouse mouse;
	Keyboard keyboard = NULL;
	State *currentState;

	bool running = false;

	std::string title;
	int width, height;
	int flags;

	SDL_Window *window;
	SDL_Renderer *renderer;

	std::vector<Keybinding> createAndLoadKeybindings();

public:
	Game(std::string title, int width, int height, int flags);

	bool initializeSDL();

	void initGame();
	void handleEvents();
	void render();
	void update();

	void killSDL();

	bool isRunning() const { return running; }
	void setRunning(bool running) { Game::running = running; }
	std::string getTitle()  const { return title; }
	int getWidth() const { return width; }
	int getHeight() const { return height; }
	SDL_Window *getWindow() const { return window; }
	SDL_Renderer *getRenderer() const { return renderer; }
	State *getState() { return currentState; }

};

#endif