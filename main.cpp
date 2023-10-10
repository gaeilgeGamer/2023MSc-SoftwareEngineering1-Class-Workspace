#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib Texture Loading Example");

    Texture2D marioTexture = LoadTexture("Resources/Textures/mario.png");

    Vector2 scale = {0.5f/0.5f};

    float rotation = 0.0f;
    Color tint = WHITE;

    Vector2 position = {(screenWidth - (marioTexture.width* scale.x))/2, (screenHeight- (marioTexture.height * scale.y))/2};

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

        DrawTextureEx(marioTexture, position, rotation, 0.5f, tint);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
