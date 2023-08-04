#pragma once
#include <iostream>

#include "raylib.h"
#include "GameBase/SceneManager.h"

class GameProgram
{
private:
    int* _width;
    int* _heigth;
    const char* _title;
    SceneManager _sceneManager;

public:
    GameProgram(int* width, int* heigth, const char* title);
    ~GameProgram();

    int* GetWidth() { return _width; }
    int* GetHeigth() { return _heigth; }

private:
    void InitialiseWindow();
    void StartGameLoop();
};