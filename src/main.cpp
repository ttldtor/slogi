#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <iostream>

int main() {
  SDL_SetMainReady();
  SDL_Init(SDL_INIT_VIDEO);

  SDL_Quit();
  return 0;
}