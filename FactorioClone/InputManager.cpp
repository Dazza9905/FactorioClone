#include "InputManager.h"
#include "BuildingManager.h"
#include "Grid.h"
#include <raylib.h>

void InputManager::CheckInput(Grid& grid)
{
    if (IsKeyPressed(KEY_P))
    {
        BuildingManager::GetInstance()->PlaceBuilding(grid.GetGridCellAtMousePosition(GetMousePosition()));
    }

    if (IsKeyPressed(KEY_RIGHT)) {
        Grid::GetInstance()->GridResize(Vector2 {Grid::GetInstance()->GetGridSizeV().x + 1, Grid::GetInstance()->GetGridSizeV().y});
    }
    if (IsKeyPressed(KEY_LEFT)) {
        Grid::GetInstance()->GridResize(Vector2 {Grid::GetInstance()->GetGridSizeV().x - 1, Grid::GetInstance()->GetGridSizeV().y});
    }
    if (IsKeyPressed(KEY_UP)) {
        Grid::GetInstance()->GridResize(Vector2 {Grid::GetInstance()->GetGridSizeV().x, Grid::GetInstance()->GetGridSizeV().y - 1});
    }
    if (IsKeyPressed(KEY_DOWN)) {
        Grid::GetInstance()->GridResize(Vector2 {Grid::GetInstance()->GetGridSizeV().x, Grid::GetInstance()->GetGridSizeV().y + 1});
    }

    
}

InputManager* InputManager::instance = nullptr;