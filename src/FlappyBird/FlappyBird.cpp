#include "FlappyBird.h"

FlappyBird::FlappyBird()
{
    int width = 600;
    int height = 400;
    GameProgram game(&width, &height, "Flappy Bird");

    Scene test("TestScene");
    Circle testCircle("Test Circle", new Vector2{-1, 1});

    test.AddGameObject(&testCircle);

    game.AddScene(&test);

    game.InitialiseWindow();
}

FlappyBird::~FlappyBird()
{
    
}