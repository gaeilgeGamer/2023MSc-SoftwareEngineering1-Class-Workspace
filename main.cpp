#include "raylib.h"

#define NUM_RECTANGLES 10

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Iterating through an array of Rectangles");
    
    Rectangle rectangles[NUM_RECTANGLES];
    Color rectangleColors[NUM_RECTANGLES];

    for(int i = 0; i< NUM_RECTANGLES; i++)
    {
        rectangles[i].x = GetRandomValue(0, screenWidth-100);
        rectangles[i].y = GetRandomValue(0, screenHeight-100);
        rectangles[i].width = GetRandomValue(50,150);
        rectangles[i].height = GetRandomValue(50,150);

        rectangleColors[i] = (Color){GetRandomValue(50,150),GetRandomValue(50,150),GetRandomValue(50,150)};

    }

    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
            BeginDrawing();
            ClearBackground(RAYWHITE);

            for(int i = 0; i<NUM_RECTANGLES; i++)
            {
            DrawRectangleRec(rectangles[i], rectangleColors[i]);
            }
            
            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
