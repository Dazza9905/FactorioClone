#include "Grid.h"
#include "GridCell.h"

Grid::Grid(Vector2 position, Vector2 gridSize, int tileSize)
    : position(position), gridSize(gridSize), tileSize(tileSize) // use constructor initialization list
{
    
    // Construct GridCell[sizeY] and assigns it to each gridCells[i]
    for (int i = 0; i < gridSize.x; i++) {

        // Create a temporary array bor the row
        std::vector<GridCell> tempRow;

        // Construct GridCell[sizeX] and assigns it to each tempRow[j]
        for (int j = 0; j < gridSize.y; j++) {
            tempRow.push_back(GridCell(Vector2 { position.x + i * tileSize, position.y + j * tileSize }, tileSize));
        }

        // Add the row to the gridCells
        gridCells.push_back(tempRow);
    }
}

void Grid::gridResize(Vector2 gridSize)
{
    // Clear the gridCells
    gridCells.clear();
    
    // Construct GridCell[sizeY] and assigns it to each gridCells[i]
    for (int i = 0; i < gridSize.x; i++) {

        // Create a temporary array bor the row
        std::vector<GridCell> tempRow;

        // Construct GridCell[sizeX] and assigns it to each tempRow[j]
        for (int j = 0; j < gridSize.y; j++) {
            tempRow.push_back(GridCell(Vector2 { position.x + i * tileSize, position.y + j * tileSize }, tileSize));
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

