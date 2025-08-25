#include <SDL2/SDL.h>
#include <iostream>
#include <cstdlib>

// глобальные переменные
SDL_Window *g_window = NULL;
SDL_Surface *g_screen_surface = NULL;
SDL_Surface *g_hello_world = NULL;

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

    g_hello_world = SDL_LoadBMP("hello_world.bmp");
    if (g_hello_world == NULL)
    {
        std::cout << "SDL_LoadBMP error! " << SDL_GetError() << std::endl;
        success = false;
    }

    return success;
}

void close()
{
    // Deallocate surface
    SDL_FreeSurface(g_hello_world);
    g_hello_world = NULL;

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
            SDL_BlitSurface(g_hello_world, NULL, g_screen_surface, NULL);
        }
        SDL_UpdateWindowSurface(g_window);
        SDL_Event e;
        bool quit = false;
        while (quit == false)
        {
            while (SDL_PollEvent(&e))
            {
                if (e.type == SDL_QUIT)
                    quit = true;
            }
        }
    }
    close();

    return 0;
}

// Free resources and close SDL
