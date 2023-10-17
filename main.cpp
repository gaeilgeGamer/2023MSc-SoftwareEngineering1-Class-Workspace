#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "For Loops");
    
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
            BeginDrawing();
            ClearBackground(RAYWHITE);
            
            for(int i = 0; i <5; i++){
                Color squareColor;

                switch(i){
                    case 0:
                        squareColor = (Color){0,0,50,255};
                        break;
                    case 1:
                        squareColor = (Color){0,0,90,255};
                        break;
                    case 2:
                        squareColor = (Color){0,0,130,255};
                        break;
                    case 3:
                        squareColor = (Color){0,0,170,255};
                        break;
                    case 4:
                        squareColor = (Color){0,0,255,255};
                        break;
                    default:
                        squareColor = (Color){0,0,255,255};
                        break;
                }
                DrawRectangle(100+100 * i, 250,50,50, squareColor);
            }
            DrawText("For Loop Example with squares!", 10,10,20,DARKGRAY);
            EndDrawing();
    }
   
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
