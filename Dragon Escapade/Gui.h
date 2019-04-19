#ifndef GUI_H
#define GUI_H
#include <vector>
#include "Button.h"
class Gui;
#include "Game.h"

class Gui {

	Game *game;
	std::vector<Button> buttons;

public:
	Gui();

	virtual void render() {}
	virtual void update() {}
	virtual void handleInput() {}

};

#endif