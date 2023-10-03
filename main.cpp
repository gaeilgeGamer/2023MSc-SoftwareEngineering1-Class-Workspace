#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(800, 600, "Variable Initialization Methods");

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    float Speed; 
    Speed = 1.99f; 
    double Score = 5.9999; 
 
    float initializedSpeed{2.99f};
    double initializedScore{};


    SetTargetFPS(60);               // Set the desired frames-per-second target

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------

        // TODO: Update your variables here

        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);  // Clear the screen with a white color
        // TODO: Draw everything you want here

        DrawText(TextFormat("Screen Width: %d", screenWidth), 10, 10,30,BLACK);
        DrawText(TextFormat("Screen Height: %d", screenHeight), 10, 40,30,BLACK);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
