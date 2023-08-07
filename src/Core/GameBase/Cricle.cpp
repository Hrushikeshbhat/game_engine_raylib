#include "Cricle.h"

namespace HashEngine {

    Circle::Circle(char* name) : GameObjectBase(name)
    {
    }

    Circle::Circle(char* name, Vector2 *translation) : GameObjectBase(name, translation)
    {
    }

    Circle::Circle(char* name, Vector2 *translation, float radius) : GameObjectBase (name, translation, new Vector2{radius , radius})
    {
    }

    Circle::Circle(char* name, Vector2 *translation, float rotation, float radius) : GameObjectBase(name, translation, rotation, new Vector2{radius, radius})
    {
    }

    Circle::~Circle()
    {
    }

    void Circle::Render()
    {
        DrawCircle(screenWidth / 2 + ((int)GetTransform()->translation.x * 100), 
        screenHeight / 2 - ((int)GetTransform()->translation.y * 100), 
        GetTransform()->scale.x * 50, 
        RED);
    }
    
}
