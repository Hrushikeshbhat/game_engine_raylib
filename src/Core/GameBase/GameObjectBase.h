#pragma once
#include "raylib.h"
#include "raymath.h"

#include "../Utils/Global.h"

namespace HashEngine {

    class GameObjectBase
    {
    private:
        Transform _transform = {
            .translation = {0, 0, 0},
            .rotation = {0, 0, 0, 0},
            .scale = {1, 1, 1}
        };

    public:
        char* _name = "GameObject";

    public:
        Transform* GetTransform() { return &_transform; }

    public:
        GameObjectBase(char* name);
        GameObjectBase(char* name, Vector2* translation);
        GameObjectBase(char* name, Vector2* translation, Vector2* scale);
        GameObjectBase(char* name, Vector2* translation, float rotation, Vector2* scale);
        GameObjectBase(char* name, Transform* transform);
        ~GameObjectBase();

        virtual void Render() = 0;
    };

}