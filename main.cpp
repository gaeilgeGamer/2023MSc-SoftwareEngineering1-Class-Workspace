#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib Follow Mouse and Change Colour");
    

    Texture2D myTexture = LoadTexture("Resources/Textures/mario.png");

    Vector2 scale = {0.5f,0.5f};
   
    Color tint = WHITE;

    SetTargetFPS(60);               // Set the desired frames-per-second target

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        Vector2 position = GetMousePosition();
        position.x -= myTexture.width * scale.x/2;
        position.y -= myTexture.height * scale.y/2;

        // TODO: Update your variables here
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            tint = (Color){ 
            (unsigned char)GetRandomValue(50,255),
            (unsigned char)GetRandomValue(50,255),
            (unsigned char)GetRandomValue(50,255), 255
            };
        }
        if(IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){
            tint = WHITE;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
          // Clear the screen with a white color
        // TODO: Draw everything you want here
        DrawTextureEx(myTexture, position, 0, 0.5f, tint);


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
