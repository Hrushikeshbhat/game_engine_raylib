#pragma once
#include <iostream>

#include "raylib.h"

#include "Utils/Global.h"
#include "GameBase/SceneManager.h"

class GameProgram
{
private:
    const char* _title;
    SceneManager _sceneManager;

public:
    GameProgram(int* width, int* height, const char* title);
    ~GameProgram();

private:
    void InitialiseWindow();
    void StartGameLoop();
};