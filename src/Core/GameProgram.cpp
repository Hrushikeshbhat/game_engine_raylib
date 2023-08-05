#include "GameProgram.h"

GameProgram::GameProgram(int* width, int* height, const char* title)
{
    screenWidth = *width;
    screenHeight = *height;
    _title = title;

    InitialiseWindow();
}

void GameProgram::InitialiseWindow()
{
    InitWindow(screenWidth, screenHeight, _title);
    SetTargetFPS(60);

    StartGameLoop();
}

void GameProgram::StartGameLoop()
{
    while (!WindowShouldClose())
    {
        BeginDrawing();

        //Clear Background to BLACK on refresh.
        ClearBackground(BLACK);

        //Draw objects here

        _sceneManager.GetCurrentScene()->Render();
        
        //End Drawing Objects
        
        EndDrawing();
    }
    CloseWindow();
}

GameProgram::~GameProgram()
{
}