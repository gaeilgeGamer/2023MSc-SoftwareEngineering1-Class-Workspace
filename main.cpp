#include "raylib.h"
#include "Ball.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Array with Classes");
    
    Ball balls[5] = {
        {{100,100}, 50, RED},
        {{200,200}, 60, BLUE},
        {{300,300}, 70, GREEN},
        {{400,400}, 80, YELLOW},
        {{500,500}, 90, PINK},
    };
  
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
            BeginDrawing();
            ClearBackground(RAYWHITE);
        
            for (int i = 0; i<5; i++)
            {
                balls[i].Draw();
            }
            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
