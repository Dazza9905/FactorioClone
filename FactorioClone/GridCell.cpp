#include "GridCell.h"

GridCell::GridCell(Vector2 position, int tileSize)
    : position(position), tileSize(tileSize)
{
}



void GridCell::Draw()
{
    DrawRectangle(position.x + 1, position.y + 1, tileSize - 2, tileSize - 2, WHITE);
}

