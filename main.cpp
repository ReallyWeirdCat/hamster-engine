#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

using namespace std;

int main() {
    SDL_Init(SDL_INIT_EVERYTHING);
    auto window = SDL_CreateWindow("hello world", 300,300,800,600, 0);
    auto renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);

    if (SDL_Init(SDL_INIT_AUDIO) < 0)
        return -1;

    //Initialize SDL_mixer
    if( Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 ) == -1 )
        return -1;

    while (true)
    {
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    return 0;
}
