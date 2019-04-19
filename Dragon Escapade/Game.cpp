#include <SDL.h>
#include <SDL_keycode.h>
#include "Game.h"
#include "States.h"
#include <iostream>

Game::Game(std::string title, int width, int height, int flags) {
	Game::title = title;
	Game::width = width;
	Game::height = height;
	Game::flags = flags;
	Game::mouse = Mouse();
}

bool Game::initializeSDL() {
	if (SDL_Init(SDL_INIT_EVERYTHING)) {
		std::cout << "SDL could not initialize everything.\n" << SDL_GetError() << std::endl;
		return false;
	}
	if (!(window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags))) std::cout << "SDL could not create a Window.\n" << SDL_GetError() << std::endl;
	if (!(renderer = SDL_CreateRenderer(window, -1, 0))) std::cout << "SDL could not create a Renderer.\n" << SDL_GetError() << std::endl; else SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	return window && renderer;
}

std::vector<Keybinding> Game::createAndLoadKeybindings() {
	std::vector<Keybinding> bindings = std::vector<Keybinding>();
	bindings.push_back(Keybinding("forward", SDLK_w));
	return bindings;
}

void Game::initGame() {
	currentState = new GameState(this);
	keyboard = Keyboard(createAndLoadKeybindings(), 75);
}

void Game::handleEvents() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
		case SDL_QUIT: running = false;
		break;
		case SDL_KEYDOWN:
			this->currentState->handleKeyInput();
		break;
		case SDL_KEYUP:

		break;
		case SDL_KEYMAPCHANGED:

		break;
	}
}

void Game::render() {
	SDL_RenderClear(renderer);
	currentState->render();
	SDL_RenderPresent(renderer);
}

void Game::update() {
	currentState->update();
}

void Game::killSDL() {
	SDL_DestroyWindow(this->window);
	SDL_DestroyRenderer(this->renderer);
	SDL_Quit();
}