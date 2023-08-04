#pragma once
#include "../Engine.h"

class FlappyBird : private GameProgram
{
public:
    FlappyBird(int* width, int* heigth, const char* title);
    ~FlappyBird();
};