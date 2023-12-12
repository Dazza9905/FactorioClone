#pragma once
#include <vector>
#include "GridCell.h"

class Grid
{
    
public:
    Grid(Vector2 position, Vector2 gridSize, int tileSize);

    void gridResize(Vector2 gridSize);  
    // void Update(float deltaTime);
    void Draw();

    Vector2 getGridSizeV() { return gridSize; }

private:
    Vector2 position;
    Vector2 gridSize;
    int tileSize;
    std::vector<std::vector<GridCell>> gridCells;
};
