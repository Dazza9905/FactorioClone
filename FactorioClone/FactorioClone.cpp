#include "raylib.h"
#include "Grid.h"

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(512, 512, "FactorioClone");

    Grid grid(Vector2 { 0, 0 }, Vector2 { 2, 2 }, 32);

    Rectangle rec = { 0, 0, 128, 128 };

    
    while (!WindowShouldClose())
    {

        DrawRectangle(0, 0, 128, 128, RED);
        
        // is right arrow paressed?
        if (IsKeyPressedRepeat(KEY_RIGHT)) {
            grid.getGridSizeV().x;
            grid.gridResize(Vector2 { grid.getGridSizeV().x + 1, grid.getGridSizeV().y });
        }
        // is left arrow paressed?
        if (IsKeyPressedRepeat(KEY_LEFT)) {
            grid.getGridSizeV().x;
            grid.gridResize(Vector2 { grid.getGridSizeV().x - 1, grid.getGridSizeV().y });
        }
        // is up arrow paressed?
        if (IsKeyPressedRepeat(KEY_UP)) {
            grid.getGridSizeV().y;
            grid.gridResize(Vector2 { grid.getGridSizeV().x, grid.getGridSizeV().y - 1 });
        }
        // is down arrow paressed?
        if (IsKeyPressedRepeat(KEY_DOWN)) {
            grid.getGridSizeV().y;
            grid.gridResize(Vector2 { grid.getGridSizeV().x, grid.getGridSizeV().y + 1 });
        }

        grid.Draw();

        
        BeginDrawing();
        ClearBackground(GRAY);
        
        EndDrawing();
    }
}