#include "SceneManager.h"

SceneManager::SceneManager()
{
    _currentScene = _scenes.front();
}

SceneManager::~SceneManager()
{
}

void SceneManager::AddScene(Scene* scene)
{
    _scenes.push_front(scene);
}

void SceneManager::StartSceneAtIndex(int sceneIndex)
{
    auto itr = _scenes.begin();

    std::advance(itr, sceneIndex);

    _currentScene = *itr;
}
