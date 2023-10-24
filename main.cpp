#include "raylib.h"

class Ball{
    public:
    Vector2 position; 
    float radius; 
    Color color;

    Ball(Vector2 pos, float r, Color c) : position(pos), radius(r), color(c){}

    void Draw(){
        DrawCircleV(position,radius, color);
    }

    void Move(Vector2 offset)
    {
        position.x += offset.x;
        position.y += offset.y;
    }

    Vector2 GetPosition() const{
        return position;
    }

    void SetPosition(Vector2 pos){
        position = pos; 
    }
};


int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Class Example with a ball");
    
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
