#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Basic Drawing Screen");

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

        DrawRectangle(50,50,200,100,RED);
        DrawCircle(400,300,50,BLUE);
        DrawLine(10,10,790,590,GREEN);

        Color myColor = {128,64,32,255};
        DrawRectangle(50,50,200,100,myColor);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
