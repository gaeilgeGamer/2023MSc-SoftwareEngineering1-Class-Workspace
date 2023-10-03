#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(800, 600, "Data Types");

    int myInteger = 5;
    float myFloat = 3.14f;
    bool isProgrammingFun = true;
    char myCharacter = 'A';
    double myDouble = 2.71828;

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

        DrawText("Hello, Raylib", 10,10,20,BLACK);
        DrawText(TextFormat("Integer Value: %d", myInteger), 10,40,20,BLACK);
        DrawText(TextFormat("Float Value: %f", myFloat), 10,70,20,BLACK);
        DrawText(TextFormat("Double Value: %f", myDouble), 10, 100,20,BLACK);
        DrawText(TextFormat("Character Value: %c", myCharacter), 10,130,20,BLACK);
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
