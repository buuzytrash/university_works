#include <SDL2/SDL.h>
#include <iostream>
#include <string>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Window *win = nullptr;
SDL_Renderer *ren = nullptr;

SDL_Texture *LoadImage(std::string path)
{
    SDL_Surface *bmp_img = nullptr;
    SDL_Texture *tex = nullptr;

    bmp_img = SDL_LoadBMP(path.c_str());

    if (bmp_img != nullptr)
    {
        tex = SDL_CreateTextureFromSurface(ren, bmp_img);
        SDL_FreeSurface(bmp_img);
    }
    else
    {
        std::cout << "SDL_LoadBMP error: " << SDL_GetError() << std::endl;
    }

    return tex;
}

void ApplySurface(int x, int y, SDL_Texture *tex, SDL_Renderer *ren)
{
    SDL_Rect pos;
    pos.x = x;
    pos.y = y;

    SDL_QueryTexture(tex, NULL, NULL, &pos.w, &pos.h);
    SDL_RenderCopy(ren, tex, NULL, &pos);
}

int main(int argc, char **argv)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        std::cout << "SDL_Init error: " << SDL_GetError() << std::endl;
        return 1;
    }
    win = SDL_CreateWindow("Lesson 2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (win == nullptr)
    {
        std::cout << "SDL_CreateWindow error: " << SDL_GetError() << std::endl;
        return 2;
    }

    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == nullptr)
    {
        std::cout << "SDL_CreateRenderer error: " << SDL_GetError() << std::endl;
        return 3;
    }

    SDL_Texture *background = nullptr, *smile = nullptr;

    background = LoadImage("background.bmp");
    smile = LoadImage("smile.bmp");
    if (background == nullptr || smile == nullptr)
    {
        return 4;
    }

    SDL_RenderClear(ren);

    int bW, bH;
    SDL_QueryTexture(background, NULL, NULL, &bW, &bH);
    ApplySurface(0, 0, background, ren);
    ApplySurface(bW, 0, background, ren);
    ApplySurface(0, bH, background, ren);
    ApplySurface(bW, bH, background, ren);

    int sW, sH;
    SDL_QueryTexture(smile, NULL, NULL, &sW, &sH);
    int x = SCREEN_WIDTH / 2 - sW / 2;
    int y = SCREEN_HEIGHT / 2 - sH / 2;
    ApplySurface(x, y, smile, ren);

    SDL_RenderPresent(ren);
    SDL_Delay(2000);

    SDL_DestroyTexture(background);
    SDL_DestroyTexture(smile);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}