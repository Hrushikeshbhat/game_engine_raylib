#include "raylib.h"
#include "raymath.h"

#include "GameObjectBase.h"

class Circle : public GameObjectBase
{
private:

public:

public:
    Circle();
    Circle(Vector2* translation);
    Circle(Vector2* translation, float radius);
    Circle(Vector2* translation, float rotation, float radius);
    ~Circle();

    void Render();

private:

};