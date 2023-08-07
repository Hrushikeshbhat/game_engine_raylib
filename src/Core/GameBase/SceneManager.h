#pragma once
#include <iostream>
#include <list>

#include "Scene.h"

namespace HashEngine {

    class SceneManager
    {
    private:
        std::list<Scene*> _scenes;
        Scene* _currentScene;

        int _currentSceneIndex = 0;

    public:
        //
        
    public:
        SceneManager();
        ~SceneManager();

        int GetCurrentSceneIndex() { return _currentSceneIndex; }
        Scene* GetCurrentScene() { return _currentScene; }

        void InitialiseScenes();
        void AddScene(Scene* scene);
        void StartSceneAtIndex(int sceneIndex);

    private:
        //
    };

}