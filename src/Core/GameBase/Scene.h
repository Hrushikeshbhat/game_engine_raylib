#pragma once
#include<iostream>
#include <list>

#include "GameObjectBase.h"

namespace HashEngine {

    class Scene
    {
    private:
        std::list<GameObjectBase*> _objs;
        const char* _sceneName;

    public:
        Scene(const char* sceneName);
        ~Scene();

        void Render();
        void AddGameObject(GameObjectBase* obj);
        void RemoveGameObject(GameObjectBase* obj);
    };

}
