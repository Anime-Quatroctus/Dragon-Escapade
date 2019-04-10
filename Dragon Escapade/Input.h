#ifndef INPUT_H
#define INPUT_H

class Mouse {

	int x, y;

public:
	Mouse();
	Mouse(int x, int y);

	int getX() { return x; }
	int getY() { return y; }
	void setPos(int x, int y) { this->x = x; this->y = y; }

};

class Keybinding {

	int keyCode;

	

};

class Keyboard {



};

#endif