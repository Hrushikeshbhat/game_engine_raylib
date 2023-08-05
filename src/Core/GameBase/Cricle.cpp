#include "Cricle.h"

Circle::Circle()
{
}

Circle::Circle(Vector2 *translation) : GameObjectBase(translation)
{
}

Circle::Circle(Vector2 *translation, float radius) : GameObjectBase (translation, new Vector2{radius , radius})
{
}

Circle::Circle(Vector2 *translation, float rotation, float radius) : GameObjectBase(translation, rotation, new Vector2{radius, radius})
{
}

Circle::~Circle()
{
}

void Circle::Render()
{
    DrawCircle(screenWidth / 2 + GetTransform()->translation.x, 
    screenHeight / 2 + GetTransform()->translation.y, 
    GetTransform()->scale.x, 
    RED);
}