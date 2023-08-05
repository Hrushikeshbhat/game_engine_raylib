#pragma once
#include "raylib.h"
#include "raymath.h"

#include "../Utils/Global.h"

class GameObjectBase
{
private:
    Transform _transform = {
        .translation = {0, 0, 0},
        .rotation = {0, 0, 0, 0},
        .scale = {1, 1, 1}
    };

public:
    Transform* GetTransform() { return &_transform; }

public:
    GameObjectBase();
    GameObjectBase(Vector2* translation);
    GameObjectBase(Vector2* translation, Vector2* scale);
    GameObjectBase(Vector2* translation, float rotation, Vector2* scale);
    GameObjectBase(Transform* transform);
    ~GameObjectBase();

    virtual void Render() = 0;
};