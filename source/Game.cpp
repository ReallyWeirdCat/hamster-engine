#include "../header/Game.h"

Game::Game() {
    isRunning = false;
}

Game::~Game() {}

void Game::init(const char *title, int width, int height, bool fullscreen) {

}

void Game::handleEvents() {

}

void Game::update() {

}

bool Game::running() {
    return isRunning;
}
