#include "BuildingManager.h"
#include "Grid.h"

BuildingManager* BuildingManager::instance = nullptr;

void BuildingManager::PlaceBuilding(Vector2 buildPosition)
{
    Grid::GetInstance()->PlaceBuilding(buildPosition);
}
