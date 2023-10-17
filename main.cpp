#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Switch Case Example");
    
    Texture2D myTexture = LoadTexture("Resources/Textures/mario.png");

    Vector2 scale = {0.5f, 0.5f};

    Color tint = WHITE;
    
    SetTargetFPS(60);               // Set the desired frames-per-second target

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        Vector2 position = GetMousePosition();
        position.x -= myTexture.width * scale.x/2;
        position.y -= myTexture.height * scale.y/2;

        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            tint= YELLOW;
        }
        if(IsMouseButtonPressed(MOUSE_RIGHT_BUTTON)){
            tint= WHITE;
        }
        if(IsKeyPressed(KEY_ONE) || IsKeyPressed(KEY_TWO) || IsKeyPressed(KEY_THREE)) 
        {
            switch(GetKeyPressed()){
                case KEY_ONE:
                tint = RED;
                break;
                case KEY_TWO:
                tint = BLUE;
                break;
                case KEY_THREE:
                tint = GREEN;
                break;
            default:
                break;
            }

        }

        // TODO: Update your variables here
        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTextureEx(myTexture, position, 0, 0.5f, tint);
       

          // Clear the screen with a white color
        // TODO: Draw everything you want here



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
