#ifndef GAME_H
#define GAME_H
#include <SDL.h>
#include "State.h"
#include <string>

class Game {

	State currentState;

	bool running = false;

	std::string title;
	int width, height;
	int flags;

	SDL_Window *window;
	SDL_Renderer *renderer;

public:
	Game(std::string title, int width, int height, int flags);
	~Game();

	bool initializeSDL();

	void handleEvents();
	void render();
	void update();

	bool isRunning() const { return running; }
	void setRunning(bool running) { Game::running = running; }
	std::string getTitle()  const { return title; }
	int getWidth() const { return width; }
	int getHeight() const { return height; }
	SDL_Window *getWindow() const { return window; }
	SDL_Renderer *getRenderer() const { return renderer; }
	State getState() { return currentState; }

};

#endif