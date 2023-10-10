#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Font Loading and Input");
    
    Font customFont = LoadFont("Resources/Fonts/font.otf");

    const char *text = "Hello, raylib";
    Vector2 textPosition = {10,screenHeight/2 -20};
    int textSize = 20; 
    Color textColor = RAYWHITE; 

    SetTargetFPS(60);               // Set the desired frames-per-second target

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        if(IsKeyPressed(KEY_UP)) textSize += 10;
        if(IsKeyPressed(KEY_DOWN) && textSize > 10) textSize -= 10;
        if(IsKeyPressed(KEY_R)) textColor = RED;
        if(IsKeyPressed(KEY_G)) textColor = GREEN;
        if(IsKeyPressed(KEY_B)) textColor = BLUE;
        if(IsKeyPressed(KEY_W)) textColor = WHITE;

        // TODO: Update your variables here
        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText(text, textPosition.x, textPosition.y, textSize, textColor);
        DrawText("Use arrow keys to change size, R/G/B/W to change colour", 10, screenHeight-40, 10, GRAY);

        DrawTextEx(customFont, "Custom Font Text", (Vector2){ screenWidth/2, 20}, customFont.baseSize, 2, DARKGRAY);
          // Clear the screen with a white color
        // TODO: Draw everything you want here



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadFont(customFont);
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
