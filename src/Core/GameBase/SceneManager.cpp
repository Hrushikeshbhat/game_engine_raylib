#include "SceneManager.h"

namespace HashEngine {

    SceneManager::SceneManager()
    {
    }

    SceneManager::~SceneManager()
    {
    }

    void SceneManager::InitialiseScenes()
    {
        _currentScene = _scenes.front();
    }

    void SceneManager::AddScene(Scene *scene)
    {
        _scenes.push_front(scene);
    }

    void SceneManager::StartSceneAtIndex(int sceneIndex)
    {
        auto itr = _scenes.begin();

        std::advance(itr, sceneIndex);

        _currentScene = *itr;
    }

}