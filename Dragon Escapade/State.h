#ifndef STATE_H
#define STATE_H
class State;
#include "Gui.h"

class State {

	Gui *gui;

public:
	State();

	virtual void render() {}
	virtual void update() {}
	virtual void handleKeyInput() {}
	virtual void handleMouseInput() {}

protected:
	virtual bool shouldUpdate() { return false; }

};

#endif