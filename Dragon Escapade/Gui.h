#ifndef GUI_H
#include <vector>
#include "Button.h"

class Gui {

	std::vector<Button> buttons;

public:
	Gui();

	virtual void render() {}
	virtual void update() {}
	virtual void handleInput() {}

};

#endif