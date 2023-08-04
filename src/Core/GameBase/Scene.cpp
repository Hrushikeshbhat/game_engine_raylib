#include "Scene.h"

Scene::Scene(const char* sceneName)
{
    _sceneName = sceneName;
}

Scene::~Scene()
{
}

void Scene::Render()
{
    for(GameObjectBase* obj : _objs)
    {
        obj->Render();
    }
}

void Scene::AddGameObject(GameObjectBase* obj)
{
    _objs.push_front(obj);
}

void Scene::RemoveGameObject(GameObjectBase* obj)
{
    _objs.remove(obj);
}