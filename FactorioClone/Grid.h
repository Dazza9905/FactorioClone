#pragma once
#include <vector>
#include "GridCell.h"

class Grid
{
    
public:
    static Grid* GetInstance(
        Vector2 gridPosition = Vector2(),
        Vector2 gridSize = Vector2(),
        int tileSize = 0 )
    {
        if (instance == nullptr)
        {
            instance = new Grid(gridPosition, gridSize, tileSize);
        }
        return instance;
    }
    //----------------------------------------------------------------------------------

    void PlaceBuilding(Vector2 buildPosition);


    
    void GridResize(Vector2 gridSize);  
    // void Update(float deltaTime);

    
    void Draw();
    
    Vector2 GetGridCellAtMousePosition(Vector2 mousePos);
    Vector2 GetGridSizeV() { return gridSize; }

private:
    Grid(Vector2 gridPosition, Vector2 gridSize, int tileSize);

    static Grid* instance;
    
    Vector2 gridPosition;
    Vector2 gridSize;
    int tileSize;
    std::vector<std::vector<GridCell>> gridCells;
};
