#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO); // Initialize SDL

    SDL_Window* window = SDL_CreateWindow(
        "SDL Window",         // Window title
        SDL_WINDOWPOS_CENTERED,// Initial x position
        SDL_WINDOWPOS_CENTERED,// Initial y position
        800,                   // Width, in pixels
        600,                   // Height, in pixels
        SDL_WINDOW_SHOWN       // Flags - see below
    );

    if (window == NULL) {
        // Handle window creation failure
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return 1;
    }

    // Create a renderer for the window
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == NULL) {
        // Handle renderer creation failure
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Set the screen color to green (R=0, G=255, B=0)
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

    // Run the event loop
    SDL_Event event;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        // Clear the screen with the green color
        SDL_RenderClear(renderer);

        // Render your graphics here (not shown in this basic example)

        // Update the screen
        SDL_RenderPresent(renderer);
    }

    // Clean up and exit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
