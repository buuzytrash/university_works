#include <SDL2/SDL.h>
#include <iostream>
#include <cstdlib>

SDL_Window *g_window = NULL;
SDL_Surface *g_screen_surface = NULL;
SDL_Surface *g_xout = NULL;

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

bool init()
{
    // Флаг для инициализации
    bool success = true;

    // Инициализация SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "SDL_Init error! " << SDL_GetError() << std::endl;
        success = false;
    }
    else
    {
        g_window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (g_window == NULL)
        {
            std::cout << "SDL_CreateWindow error! " << SDL_GetError() << std::endl;
            success = false;
        }
        else
        {
            g_screen_surface = SDL_GetWindowSurface(g_window);
        }
    }
    return success;
}

bool loadMedia()
{
    bool success = true;

    g_xout = SDL_LoadBMP("x.bmp");
    if (g_xout == NULL)
    {
        std::cout << "SDL_LoadBMP error! " << SDL_GetError() << std::endl;
        success = false;
    }

    return success;
}

void close()
{
    // Deallocate surface
    SDL_FreeSurface(g_xout);
    g_xout = NULL;

    // Destroy window
    SDL_DestroyWindow(g_window);
    g_window = NULL;

    // Quit SDL subsystems
    SDL_Quit();
}

int main(int argc, char *argv[])
{ // Start up SDL and create window
    if (!init())
    {
        printf("Failed to initialize!\n");
    }
    else
    {
        // Load media
        if (!loadMedia())
        {
            printf("Failed to load media!\n");
        }
        else
        {
            // Apply the image
            bool quit = false;
            SDL_Event e;

            while (!quit)
            {
                while (SDL_PollEvent(&e) != 0)
                {
                    if (e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                    SDL_BlitSurface(g_xout, NULL, g_screen_surface, NULL);
                    SDL_UpdateWindowSurface(g_window);
                }
            }
        }
    }

    close();

    return 0;
}
