#include "GridCell.h"

GridCell::GridCell(Vector2 position, int tileSize)
    : position(position), tileSize(tileSize)
{
}

void GridCell::PlaceBuilding()
{
    isOccupied = true;
    
}




void GridCell::Draw()
{
    
    if (isOccupied)
    {
        DrawRectangle(position.x + 1, position.y + 1, tileSize - 2, tileSize - 2, RED);
    }
    else
    {
        DrawRectangle(position.x + 1, position.y + 1, tileSize - 2, tileSize - 2, WHITE);
    }
    
}

