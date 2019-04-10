#include "States.h"

GameState::GameState(Game *game) {
	GameState::game = game;
}

void GameState::render() {

}

void GameState::update() {

}

void GameState::handleKeyInput() {

}

void GameState::handleMouseInput() {

}

bool GameState::shouldUpdate() {
	return true;
}