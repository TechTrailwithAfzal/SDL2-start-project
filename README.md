# Setting up an SDL project in Code::Blocks

This guide will walk you through the process of setting up an SDL (Simple DirectMedia Layer) project in Code::Blocks. SDL is a popular multimedia library that provides low-level access to audio, keyboard, mouse, and graphics hardware, making it an excellent choice for developing cross-platform games and applications.

## Prerequisites

Before getting started, make sure you have the following:

- Code::Blocks IDE installed on your system (https://www.codeblocks.org/).
- SDL development libraries for your platform. You can download them from the official SDL website: https://www.libsdl.org/download-2.0.php

## Step 1: Download SDL Development Libraries

1. Download the SDL development libraries for your platform from the official SDL website.
2. Extract the downloaded package to a location of your choice.

## Step 2: Create a New SDL Project in Code::Blocks

1. Open Code::Blocks and go to "File" > "New" > "Project..."
2. Select "SDL project" from the available templates and click "Go."

## Step 3: Configure Project Settings

1. Choose a title and location for your project, then click "Next."
2. In the "SDL version" drop-down, select the appropriate version of SDL you downloaded (e.g., 2.0.x).
3. Set the "Compiler" drop-down to your preferred compiler (e.g., GNU GCC Compiler) and click "Finish."

## Step 4: Add SDL Libraries to the Project

1. Right-click on your project in the "Management" pane (located on the left-hand side).
2. Select "Build options."
3. Go to the "Linker settings" tab.
4. In the "Other linker options" field, add the necessary SDL libraries for your platform:

   - For Windows:
     ```
     -lmingw32 -lSDL2main -lSDL2
     ```

   - For macOS:
     ```
     -framework SDL2
     ```

   - For Linux:
     ```
     -lSDL2
     ```

## Step 5: Write Your SDL Code

Now that your project is set up, you can start writing your SDL code. You can create windows, handle events, draw graphics, play audio, and much more using SDL functions.

Here's a simple example to create a green window using SDL:

```c
#include <SDL.h>

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO); // Initialize SDL

    // Code to create a green window (refer to the full example in the previous answer)

    // Clean up and exit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
