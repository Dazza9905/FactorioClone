#include "Grid.h"
#include "GridCell.h"

Grid::Grid(int sizeX, int sizeY, int tileSize)
{
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->tileSize = tileSize;

    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            gridCells[i][j] = GridCell(tileSize);
        }
    }
}
