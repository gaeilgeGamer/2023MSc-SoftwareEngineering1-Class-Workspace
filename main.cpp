#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(800, 600, "Operators");

    const int screenWidth = GetScreenWidth();
    const int screenHeight = GetScreenHeight();

    int a = 5; 
    int b = 3; 

    int sum = a+b; 
    int difference = a -b;
    int product = a*b; 
    float quotient = (float)a/b;
    int remainder = a% b;

    bool isEqual = a ==b;
    bool isNotEqual = a!=b;

    bool logicalResult = (a>b)&& (a!=b); 


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

        DrawText("Operators with Raylib!", 10,10,20,LIGHTGRAY);
        DrawText(TextFormat("Sum: %d+%d+%d", a, b, sum), 10,40,20, BLACK);
        ClearBackground(RAYWHITE);  // Clear the screen with a white color
        // TODO: Draw everything you want here

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
