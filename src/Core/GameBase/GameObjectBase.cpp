#include "GameObjectBase.h"

GameObjectBase::GameObjectBase()
{
}

GameObjectBase::GameObjectBase(Vector2 *translation)
{
    _transform.translation = {translation->x, translation->y, 0};
}

GameObjectBase::GameObjectBase(Vector2 *translation, Vector2 *scale)
{
    _transform.translation = {translation->x, translation->y, 0};
    _transform.scale = {scale->x, scale->y, 0};
}

GameObjectBase::GameObjectBase(Vector2 *translation, float rotation, Vector2 *scale)
{
    _transform.translation = {translation->x, translation->y, 0};
    _transform.rotation = {0, 0, rotation, 0};
    _transform.scale = {scale->x, scale->y, 0};
}

GameObjectBase::GameObjectBase(Transform *transform)
{
    _transform = *transform;
}

GameObjectBase::~GameObjectBase()
{
}

void GameObjectBase::Render()
{
    
}