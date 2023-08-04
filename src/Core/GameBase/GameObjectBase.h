#pragma once
#include "raylib.h"
#include "raymath.h"

class GameObjectBase
{
private:
    Transform m_transform;

public:
    Transform GetTransform() { return m_transform; }

public:
    GameObjectBase();
    ~GameObjectBase();

    virtual void Render() = 0;
};