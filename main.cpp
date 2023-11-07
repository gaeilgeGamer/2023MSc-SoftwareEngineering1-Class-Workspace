#include "raylib.h"

class Paddle {
    private:
    int posX;
    int posY;
    int width;
    int height; 
    Color color; 

    public: 
    Paddle(int x, int y, int width, int height, Color color)
    :posX(x), posY(y), width(width), height(height), color(color){}

    void Draw() const{
        DrawRectangle(posX,posY,width,height,color);
    }
    void Update(){
        if(IsKeyDown(KEY_UP)){
            posY -= 5;
        }
        if(IsKeyDown(KEY_DOWN)){
            posY += 5;
        }

        if(posY<0) posY = 0;
        if(posY>GetScreenHeight()-height) posY = GetScreenHeight() - height;
    }
};

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    InitWindow(screenWidth, screenHeight, "Paddle Game");
  
    Paddle playerPaddle(50, screenHeight/2-50,10,100,BLUE);
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        playerPaddle.Update();
        
            BeginDrawing();
            ClearBackground(RAYWHITE);
            playerPaddle.Draw();
            EndDrawing();        
                
    }
    CloseWindow();       
    return 0;       
            
}
