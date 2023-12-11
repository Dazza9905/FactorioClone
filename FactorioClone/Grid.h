#pragma once
#include <vector>
#include "GridCell.h"

class Grid
{
    
public:
    Grid(int sizeX, int sizeY, int tileSize);
    
    void Update(float deltaTime);
    void Draw();

private:
    int sizeX;
    int sizeY;
    int tileSize;

    std::vector<std::vector<GridCell>> gridCells;
};
