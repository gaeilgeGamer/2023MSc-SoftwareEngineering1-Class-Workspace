#include "raylib.h"

class Shape{
    public:
    int x,y;
    Color color;

    Shape(int x, int y, Color color): x(x), y(y), color(color){}
};

class RectangleShape: public Shape{
public:
int width,height; 

RectangleShape(int x, int y, int width, int height, Color color)
: Shape(x,y, color), width(width), height(height){}

void Render(){
    DrawRectangle(x,y, width, height, color);
}

};

class CircleShape : public Shape{
    public:
    int radius;

    CircleShape(int x, int y, int radius, Color color)
    :Shape(x,y,color), radius(radius){}

void Render(){
    DrawCircle(x,y,radius,color);
}
};


int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Raylib with Inheritance");

    RectangleShape rect(100,100,200,150, RED);

    CircleShape circle(500,300,100,BLUE);
  
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        
            BeginDrawing();
            ClearBackground(RAYWHITE);

            rect.Render();
            circle.Render();

            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
