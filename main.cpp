#include "raylib.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Basic Array");
    
    Vector2 circlePositions[3];

    circlePositions[0] = (Vector2){200,300};
    circlePositions[1] = (Vector2){400,300};
    circlePositions[2] = (Vector2){600,300};

    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
            BeginDrawing();
            ClearBackground(RAYWHITE);

            DrawCircleV(circlePositions[0], 50, RED);
            DrawCircleV(circlePositions[1], 50, BLUE);
            DrawCircleV(circlePositions[2], 50, GREEN);
            
            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
