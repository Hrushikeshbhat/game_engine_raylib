#include "Scene.h"

Scene::Scene(/* args */)
{
}

Scene::~Scene()
{
}

void Scene::Render()
{
    for(GameObjectBase *obj : _objs)
    {
        obj->Render();
    }
}

void Scene::AddGameObject(GameObjectBase &obj)
{
    _objs.push_front(&obj);
}

void Scene::RemoveGameObject(GameObjectBase &obj)
{
    _objs.remove(&obj);
}

void Scene::Awake()
{
    Render();
}

void Scene::Start()
{
    Render();
}

void Scene::Tick()
{
    Render();
}