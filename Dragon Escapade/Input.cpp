#include "Input.h"

Mouse::Mouse() {
	Mouse::x = 0;
	Mouse::y = 0;
}

Mouse::Mouse(int mouseX, int mouseY) {
	Mouse::x = mouseX;
	Mouse::y = mouseY;
}

Keybinding::Keybinding(std::string id, int keyCode) {
	Keybinding::id = id;
	Keybinding::keyCode = keyCode;
	Keybinding::pressed = false;
}

Keyboard::Keyboard(short int timeTillType) {
	Keyboard::timeTillType = timeTillType;
	Keyboard::keyTyped[0] = 0;
	Keyboard::keyTyped[1] = 0;
}

Keyboard::Keyboard(std::vector<Keybinding> bindings, short int timeTillType) {
	Keyboard::bindings = bindings;
	Keyboard::timeTillType = timeTillType;
	Keyboard::keyTyped[0] = 0;
	Keyboard::keyTyped[1] = 0;
}
