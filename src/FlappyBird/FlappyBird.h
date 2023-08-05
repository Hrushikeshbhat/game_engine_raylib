#pragma once
#include "../Engine.h"

class FlappyBird : private GameProgram
{
public:
    FlappyBird(int* width, int* height, const char* title);
    ~FlappyBird();
};