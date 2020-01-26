#include "menu.h"

Menu::Menu(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    menuRectO1 = {100, 150, 300, 100};
    menuRectO2 = {100, 300, 300, 100};
}

void Menu::setMenu(int x, int y)
{
    menuRect = {x, y, 20, 20};
}

void Menu::update()
{
    if (SDL_HasIntersection(&menuRect, &menuRectO1)) {
        SDL_Surface* surface = IMG_Load("res/menuO1.png");
        texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_FreeSurface(surface);
    }
    else if (SDL_HasIntersection(&menuRect, &menuRectO2)) {
        SDL_Surface* surface = IMG_Load("res/menuO2.png");
        texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_FreeSurface(surface);
    }
    else {
        SDL_Surface* surface = IMG_Load("res/menu.png");
        texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_FreeSurface(surface);
    }
}

void Menu::render()
{
    SDL_RenderCopy(renderer, texture, NULL, NULL);
}