#include <SDL.h>
#include <iostream>
#include "Game.h"

Game *game;

int main(int argc, char *args[]) {
	game = new Game("Game", 720, 480, SDL_WINDOW_SHOWN);
	if (!game->initializeSDL()) return -1;
	game->setRunning(true); // Successfully initialized we are running.

	const int FPS = 60;
	const double timeTillUpdate = (1.0/FPS);

	double timePassed = 0.0, totalTimePassed = 0.0, deltaTime = 0.0;
	long int currentTime, lastTime = SDL_GetTicks();

	unsigned short frames = 0;
	while (game->isRunning()) {
		currentTime = SDL_GetTicks();
		deltaTime = (double) ((currentTime - lastTime) / 1000.0);
		timePassed += deltaTime;
		totalTimePassed += deltaTime;
		lastTime = currentTime;
		game->handleEvents();
		if (timePassed >= timeTillUpdate) {
			game->render();
			game->update();
			frames++;
			timePassed -= timeTillUpdate;
		}
		if (totalTimePassed >= 1.0) {
			totalTimePassed -= 1.0;
			std::cout << "FPS: " << frames << std::endl;
			frames = 0;
		}
	}
	game->~Game();

	return 0;
}