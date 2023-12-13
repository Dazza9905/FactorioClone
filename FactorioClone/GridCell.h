#pragma once
#include "Buildings\BuildingBASE.h"
#include "raylib.h"

    
class GridCell
{
public:
    GridCell(Vector2 position, int tileSize);





    
    // void Update(float deltaTime) 
    void Draw();
    void PlaceBuilding();
    

private:
    Vector2 position;
    int tileSize;
    bool isOccupied = false;
};
