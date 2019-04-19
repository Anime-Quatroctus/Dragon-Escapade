#ifndef INPUT_H
#define INPUT_H
#include <vector>

class Mouse {

	int x = 0, y = 0;

public:
	Mouse();
	Mouse(int x, int y);

	int getX() { return x; }
	int getY() { return y; }
	void setPos(int x, int y) { this->x = x; this->y = y; }

};

class Keybinding {

	std::string id;
	int keyCode;
	bool pressed;

public:
	Keybinding(std::string id, int keyCode);

	std::string getID() { return id; }
	int getCode() { return keyCode; }
	bool isPressed() { return pressed; }
	void setPressed(bool pressed) { this->pressed = pressed; }

};

class Keyboard {

	std::vector<Keybinding> bindings;
	
	short int timeTillType;
	// 1: lastTypeTime  2: keyCode
	int keyTyped[2];

public:
	Keyboard(const short int timeTillType);
	Keyboard(std::vector<Keybinding> bindings, const short int timeTillType);

	short int getTimeTillType() { return timeTillType; }

};

#endif