#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <string>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int TILE_SIZE = 40;

SDL_Window *win = nullptr;
SDL_Renderer *ren = nullptr;

SDL_Texture *loadTexture(const std::string path, SDL_Renderer *ren)
{
    SDL_Texture *tex = IMG_LoadTexture(ren, path.c_str());
    if (tex == nullptr)
    {
        std::cout << "IMG_LoadTexture error: " << IMG_GetError << std::endl;
    }
    return tex;
}

void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y, int w, int h)
{
    SDL_Rect dst;
    dst.x = x;
    dst.y = y;
    dst.h = h;
    dst.w = w;

    SDL_RenderCopy(ren, tex, NULL, &dst);
}

void renderTexture(SDL_Texture *tex, SDL_Renderer *ren, int x, int y)
{
    int w, h;
    SDL_QueryTexture(tex, NULL, NULL, &w, &h);
    renderTexture(tex, ren, x, y, w, h);
}

int main(int argc, char **argv)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        std::cout << "SDL_Init error: " << SDL_GetError() << std::endl;
        return 1;
    }

    if ((IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG) != IMG_INIT_PNG)
    {
        std::cout << "IMG_Init error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 2;
    }

    win = SDL_CreateWindow("Lesson 2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (win == nullptr)
    {
        std::cout << "SDL_CreateWindow error: " << SDL_GetError() << std::endl;
        return 3;
    }

    ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (ren == nullptr)
    {
        std::cout << "SDL_CreateRenderer error: " << SDL_GetError() << std::endl;
        return 4;
    }

    SDL_Texture *background = loadTexture("background.png", ren);
    SDL_Texture *smile = loadTexture("smile.png", ren);

    if (smile == nullptr || background == nullptr)
    {
        std::cout << "loadTexture error: " << SDL_GetError() << std::endl;
        SDL_DestroyTexture(background);
        SDL_DestroyTexture(smile);
        SDL_DestroyRenderer(ren);
        SDL_DestroyWindow(win);
        IMG_Quit();
        SDL_Quit();
        return 5;
    }

    int xTiles = SCREEN_WIDTH / TILE_SIZE;
    int yTiles = SCREEN_HEIGHT / TILE_SIZE;

    // Отрисовка фона

    SDL_Event e;
    // Флаг выхода
    bool quit = false;
    while (!quit)
    {
        // Обработка событий
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
            if (e.type == SDL_KEYDOWN)
            {
                quit = true;
            }
            if (e.type == SDL_MOUSEBUTTONDOWN)
            {
                quit = true;
            }
        }
        // Отображение сцены

        SDL_RenderClear(ren);
        for (int i = 0; i < xTiles * yTiles; ++i)
        {
            int x = i % xTiles;
            int y = i / xTiles;
            renderTexture(background, ren, x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE);
        }

        int iW, iH;
        SDL_QueryTexture(smile, NULL, NULL, &iW, &iH);
        int x = SCREEN_WIDTH / 2 - iW / 2;
        int y = SCREEN_HEIGHT / 2 - iH / 2;
        renderTexture(smile, ren, x, y);
        renderTexture(smile, ren, x, y);
        SDL_RenderPresent(ren);
    }

    // SDL_RenderPresent(ren);
    // SDL_Delay(2000);

    SDL_DestroyTexture(background);
    SDL_DestroyTexture(smile);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    IMG_Quit();
    SDL_Quit();

    return 0;
}