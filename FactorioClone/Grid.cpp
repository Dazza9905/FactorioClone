#include "Grid.h"
#include <cmath>
#include <chrono>

#include "GridCell.h"
#include <raylib.h>

Grid* Grid::instance = nullptr;

Grid::Grid(Vector2 gridPosition, Vector2 gridSize, int tileSize)
    : gridPosition(gridPosition), gridSize(gridSize), tileSize(tileSize) // use constructor initialization list
{
    
    // Construct GridCell[sizeY] and assigns it to each gridCells[i]
    for (int i = 0; i < gridSize.x; i++) {

        // Create a temporary array bor the row
        std::vector<GridCell> tempRow;

        // Construct GridCell[sizeX] and assigns it to each tempRow[j]
        for (int j = 0; j < gridSize.y; j++) {
            tempRow.push_back(GridCell(Vector2 { gridPosition.x + i * tileSize, gridPosition.y + j * tileSize }, tileSize));
        }

        // Add the row to the gridCells
        gridCells.push_back(tempRow);
    }
}

void Grid::PlaceBuilding(Vector2 buildPosition)
{
    gridCells[buildPosition.x][buildPosition.y].PlaceBuilding();
}




Vector2 Grid::GetGridCellAtMousePosition(Vector2 mousePos)
{
    // Get the gridcell at the mouse gridPosition
    Vector2 gridCellPos = Vector2 { std::floor((mousePos.x - gridPosition.x) / tileSize), std::floor((mousePos.y - gridPosition.y) / tileSize) };
    // printf("gridCellPos: %f, %f\n", gridCellPos.x, gridCellPos.y);

    // Check if the grid cell is out of bounds
    // if (gridCellPos.x < 0 || gridCellPos.x >= gridSize.x || gridCellPos.y < 0 || gridCellPos.y >= gridSize.y) {
    //     return Vector2 { -1, -1 };
    // }

    return gridCellPos;
}

void Grid::GridResize(Vector2 gridSize)
{
    // Clear the gridCells
    gridCells.clear();
    
    // Construct GridCell[sizeY] and assigns it to each gridCells[i]
    for (int i = 0; i < gridSize.x; i++) {

        // Create a temporary array bor the row
        std::vector<GridCell> tempRow;

        // Construct GridCell[sizeX] and assigns it to each tempRow[j]
        for (int j = 0; j < gridSize.y; j++) {
            tempRow.push_back(GridCell(Vector2 { gridPosition.x + i * tileSize, gridPosition.y + j * tileSize }, tileSize));
        }

        // Add the row to the gridCells
        gridCells.push_back(tempRow);
    }

    this->gridSize = gridSize;
    
    
}

void Grid::Draw()
{
    // Draw each grid cell
    for (auto element : gridCells) {
        for (auto cell : element) {
            cell.Draw();
        }
    }
}

