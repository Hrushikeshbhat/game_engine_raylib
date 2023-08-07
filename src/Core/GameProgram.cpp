#include "GameProgram.h"

namespace HashEngine {

    GameProgram::GameProgram(int* width, int* height, const char* title)
    {
        screenWidth = *width;
        screenHeight = *height;
        _title = title;
    }

    void GameProgram::InitialiseWindow()
    {
        _sceneManager.InitialiseScenes();

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

            GetCurrentScene()->Render();
            
            //End Drawing Objects

            EndDrawing();
        }
        CloseWindow();
    }

    GameProgram::~GameProgram()
    {
    }

    int GameProgram::GetCurrentSceneIndex()
    {
        return _sceneManager.GetCurrentSceneIndex();
    }

    Scene *GameProgram::GetCurrentScene()
    {
        return _sceneManager.GetCurrentScene();
    }

    void GameProgram::AddScene(Scene *scene)
    {
        _sceneManager.AddScene(scene);
    }

    void GameProgram::StartSceneAtIndex(int sceneIndex)
    {
        _sceneManager.StartSceneAtIndex(sceneIndex);
    }

}