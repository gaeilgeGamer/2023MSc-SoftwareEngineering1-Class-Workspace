#include "raylib.h"
#include "Ball.h"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Source and Header file with Class and Objects");
    
    Ball myBall({screenWidth/2, screenHeight/2}, 50, BLUE);
  
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
            BeginDrawing();
            ClearBackground(RAYWHITE);

            myBall.Draw();

            if(IsKeyDown(KEY_RIGHT)) myBall.Move({5,0});
            if(IsKeyDown(KEY_LEFT)) myBall.Move({-5,0});
            if(IsKeyDown(KEY_UP)) myBall.Move({0,-5});
            if(IsKeyDown(KEY_DOWN)) myBall.Move({0,5});

            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
