#include "raylib.h"

const int screenWidth = 800;
const int screenHeight = 600;
Vector2 circlePosition = {screenWidth/2, screenHeight/2};
const float moveSpeed = 5.0f;
const int circleRadius = 50;

Vector2 MoveCircle(Vector2 position)
{
    if(IsKeyDown(KEY_RIGHT)) position.x += moveSpeed; 
    if(IsKeyDown(KEY_LEFT)) position.x -= moveSpeed;
    if(IsKeyDown(KEY_UP)) position.y -= moveSpeed;
    if(IsKeyDown(KEY_DOWN)) position.y += moveSpeed;
    return position; 
}

int main()
{
    InitWindow(screenWidth, screenHeight, "Function Example");
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        circlePosition = MoveCircle(circlePosition);

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircleV(circlePosition, circleRadius, RED);
            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
