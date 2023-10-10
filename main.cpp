#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Input Movement Example");

    Texture2D myTexture = LoadTexture("Resources/Textures/mario.png");

    Vector2 scale = {0.5f,0.5f};

    float rotation = 0.0f;
    Color tint = WHITE;

    Vector2 position = {(screenWidth -(myTexture.width *scale.x))/2, (screenHeight-(myTexture.height*scale.y))/2};

    const float moveSpeed = 5.0f;

    SetTargetFPS(60);               // Set the desired frames-per-second target

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        if(IsKeyDown(KEY_RIGHT)) position.x += moveSpeed;
        if(IsKeyDown(KEY_LEFT)) position.x -= moveSpeed;
        if(IsKeyDown(KEY_UP)) position.y -= moveSpeed;
        if(IsKeyDown(KEY_DOWN)) position.y += moveSpeed;
        // TODO: Update your variables here
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) rotation -= 10.0f;
        if(IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)) rotation += 10.0f;
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
          // Clear the screen with a white color
        // TODO: Draw everything you want here
        DrawTextureEx(myTexture, position, rotation, 0.5f, tint);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }
    UnloadTexture(myTexture);
    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
