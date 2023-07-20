# Setting up an SDL project in CodeBlocks

This guide will walk you through the process of setting up an SDL (Simple DirectMedia Layer) project in Code::Blocks. SDL is a popular multimedia library that provides low-level access to audio, keyboard, mouse, and graphics hardware, making it an excellent choice for developing cross-platform games and applications.

## Prerequisites

Before getting started, make sure you have the following:

- Code::Blocks IDE installed on your system (https://www.codeblocks.org/).
- SDL development libraries for your platform. You can download them from the official SDL website: https://www.libsdl.org/download-2.0.php

## Step 1: Download SDL Development Libraries

1. Download the SDL development libraries for your platform from the official SDL github repository (https://github.com/libsdl-org/SDL/releases/tag/release-2.28.1).
2. Download SDL2-devel-2.28.1-mingw.zip
3. Extract the downloaded package to a location of your choice.

## Step 2: Create a New SDL Project in CodeBlocks

1. Open CodeBlocks and go to "File" > "New" > "Project..."
2. Select "SDL2 project" from the available templates and click "Go" click "Next"
3. Give a project Name and Folder to create project in you can choice by click on "..." then select folder where you want to save your project then click "next" 
4. Give the location where you unzip SDL2 development libraries at first give base click "..." and open "SDL2-2.28.1" folder then open "x86_64-w64-mingw32" if your computer is 64 bit else go to "i686-w64-mingw32" then select folder
5. Select inclide click on "..." open include folder of SDL2 and select folder
6. Select lib click "..." open lib folder and select folder 
7. Select bin click "..." open bin folder and select folder 
8. then click on close 
9. then open x86_64-w64-mingw32 if your computer is 64 bit else go to "i686-w64-mingw32" then select folder then click next 
10. select "GNU GCC Compiler " as compiler and alse cheak create Dubug configuration and create Relise configuration then click finish 
11. go to bin folder of x86_64-w64-mingw32 copy "SDL2.dll" file and paste it on your project folder  
12. click source you can see main.cpp run it 

### you can copy "window.cpp" to understand more 