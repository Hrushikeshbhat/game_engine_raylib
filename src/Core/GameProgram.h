#pragma once
#include <iostream>

#include "raylib.h"

#include "Utils/Global.h"
#include "GameBase/SceneManager.h"

namespace HashEngine {

    class GameProgram
    {
    private:
        const char* _title;
        SceneManager _sceneManager;

    public:
        GameProgram(int* width, int* height, const char* title);
        ~GameProgram();

        void InitialiseWindow();

        int GetCurrentSceneIndex();
        Scene* GetCurrentScene();

        void AddScene(Scene* scene);
        void StartSceneAtIndex(int sceneIndex);

    private:
        void StartGameLoop();
    };

}