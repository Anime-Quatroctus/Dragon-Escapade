#ifndef GAMESTATE_H
#define GAMESTATE_H
#include "State.h"
#include "Game.h"

class MainMenuState : public State {

	Game *game;

public:
	MainMenuState(Game *game);

	void render();
	void update();
	void handleKeyInput();
	void handleMouseInput();

protected:
	bool shouldUpdate();

};

class GameState : public State {

	Game *game;

public:
	GameState(Game *game);

	void render();
	void update();
	void handleKeyInput();
	void handleMouseInput();

protected:
	bool shouldUpdate();

};

#endif