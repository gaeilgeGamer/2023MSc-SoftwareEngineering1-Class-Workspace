#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Ball Example");

    Vector2 ballPosition = {(float)screenWidth/2, (float)screenHeight/2};
    float ballRadius = 50.0f;
    Color ballColor = RAYWHITE;

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

        ClearBackground(BLACK);  // Clear the screen with a white color
        // TODO: Draw everything you want here

        DrawText("Welcome to Raylib Ball Example", 10, 10, 20, RAYWHITE);
        DrawCircleV(ballPosition, ballRadius, ballColor);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
