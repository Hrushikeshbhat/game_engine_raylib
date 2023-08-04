#include "GameProgram.h"

GameProgram::GameProgram(int* width, int* heigth, const char* title)
{
    _width = width;
    _heigth = heigth;
    _title = title;

    InitialiseWindow();
}

void GameProgram::InitialiseWindow()
{
    InitWindow(*_width, *_heigth, _title);
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