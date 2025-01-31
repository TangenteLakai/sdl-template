#include <stdio.h>
#include <SDL2/SDL.h>

// Window size 
#define WIDTH 900
#define HEIGHT 600

int main(int argc, char *argv[])
{
        // Create a window
        SDL_Init(SDL_INIT_VIDEO);
        SDL_Window *window = SDL_CreateWindow("Window Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
        printf("[LOG] Window initialized succesfully\n");

        // Draw basic rectangle to a surface
        SDL_Surface *surface = SDL_GetWindowSurface(window);
        SDL_Rect rect = {200, 200, 200, 200};
        SDL_FillRect(surface, &rect, 0xffffffff);
        SDL_UpdateWindowSurface(window);
        printf("[LOG] Rectangle drawed\n");

        // Window stays open for 5 seconds
        SDL_Delay(5000);
        // Then quit to avoid memory leaks
        SDL_Quit();
        
        return 0;
}
