#pragma once
#include<iostream>
#include <list>

#include "GameObjectBase.h"

class Scene
{
private:
    std::list<GameObjectBase*> _objs;

public:
    Scene();
    ~Scene();

    void Render();
    void AddGameObject(GameObjectBase &obj);
    void RemoveGameObject(GameObjectBase &obj);

    void Awake();
    void Start();
    void Tick();
};
