#include "raylib.h"

struct Player{
    Vector2 position; 
    float speed; 
    Texture2D texture; 
    Rectangle sourceRec; 
    float time;
};

struct Player HandlePlayerInput(struct Player player)
{
        if(IsKeyDown(KEY_RIGHT)) player.position.x += player.speed;
        if(IsKeyDown(KEY_LEFT)) player.position.x -= player.speed;
        if(IsKeyDown(KEY_UP)) player.position.y -= player.speed;
        if(IsKeyDown(KEY_DOWN)) player.position.y += player.speed;
        
        return player; 
}

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;
    
    InitWindow(screenWidth, screenHeight, "Player Struct Example");
    
    struct Player player; 
    player.position = (Vector2){screenWidth/2, screenHeight/2};
    player.speed = 5.0f;
    player.texture = LoadTexture("Resources/Textures/scarfy.png");

    player.sourceRec = (Rectangle){0.0f, 0.0f, (float)(player.texture.width)/6, (float)(player.texture.height)};


    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        player = HandlePlayerInput(player);

            BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTextureRec(player.texture, player.sourceRec, player.position, WHITE);
            EndDrawing();        
                
    }
    UnloadTexture(player.texture);
    CloseWindow();       
    return 0;       
            
}
