#pragma once
#include <raylib.h>

#include "../Direction.h"

class BuildingBASE
{
public:
    BuildingBASE();

    
    virtual void Update(float deltaTime);
    virtual void Draw();

private:
    Vector2 position;
    Direction direction;
    Vector2 size;
    Texture texture;
};
