#include "raylib.h"
#include "Grid.h"
#include "BuildingManager.h"
#include "InputManager.h"

int main()
{

    
    struct config
    {
        int tileSize = 64;
        Vector2 gridSize = { 32, 18 };
        Vector2 position = { 0, 0 };
        int windowWidth = tileSize * gridSize.x;
        int windowHeight = tileSize * gridSize.y;
    };
    config config;

    
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(config.windowWidth + config.tileSize*2, config.windowHeight, "FactorioClone");

    Grid::GetInstance(config.position, config.gridSize, config.tileSize);
    
    while (!WindowShouldClose())
    {
        InputManager::GetInstance()->CheckInput(*Grid::GetInstance());

        DrawRectangle(0, 0, 128, 128, RED);
        
        

        Grid::GetInstance()->Draw();

        
        BeginDrawing();
        ClearBackground(GRAY);
        
        EndDrawing();
    }
}