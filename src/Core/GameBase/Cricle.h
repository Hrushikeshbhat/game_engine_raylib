#include "raylib.h"
#include "raymath.h"

#include "GameObjectBase.h"
#include "../Utils/Global.h"

namespace HashEngine {

    class Circle : public GameObjectBase
    {
    private:

    public:
        Color color = WHITE;

    public:
        Circle(char* name);
        Circle(char* name, Vector2* translation);
        Circle(char* name, Vector2* translation, float radius);
        Circle(char* name, Vector2* translation, float rotation, float radius);
        ~Circle();

        void Render();

    private:

    };

}