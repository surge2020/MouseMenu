#ifndef MENU
#define MENU

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Menu {
public:
    Menu(SDL_Renderer* renderer);
    void setMenu(int x, int y);
    void update();
    void render();
private:
    SDL_Renderer* renderer;
    SDL_Rect menuRect;
    SDL_Rect menuRectO1;
    SDL_Rect menuRectO2;
    SDL_Texture* texture;
};

#endif