#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "While Loops");
    
    int loopCounter = 0;
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
            loopCounter++;

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText(TextFormat("Loop Counter: %d", loopCounter), 10,10,20,LIGHTGRAY);
            
            EndDrawing();
    }
   
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
