#pragma once
#include "Buildings/IBuilding.h"
    
class GridCell
{
public:
    GridCell(int tileSize);
    ~GridCell();
    
    void Update(float deltaTime);
    void Draw();
    void AddBuilding(IBuilding* building);
    
    
};
