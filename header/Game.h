#pragma once

#include <SDL2/SDL.h>
#include <iostream>

class Game {
private:

    bool isRunning{};
    SDL_Window* window{};

public:
    Game();
    ~Game();

    void init(const char* title, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    bool running();
};