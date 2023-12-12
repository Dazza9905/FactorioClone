#pragma once
#include "Buildings/IBuilding.h"
#include "raylib.h"

    
class GridCell
{
public:
    GridCell(Vector2 position, int tileSize);
    
    // void Update(float deltaTime) 
    void Draw();
    // void AddBuilding(IBuilding* building);

private:
    Vector2 position;
    int tileSize;
};
