#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Audio Example");
    
    InitAudioDevice();

    Sound sound = LoadSound("Resources/Sounds/sound.wav");

    int volume = 50;
    SetSoundVolume(sound, volume/100.0f);
    
    SetTargetFPS(60);               // Set the desired frames-per-second target

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
    

        // TODO: Update your variables here
        
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);
        if(IsKeyPressed(KEY_SPACE)){
            PlaySound(sound);
        }
        if(IsKeyPressed(KEY_UP)&& volume <100)
        {
            volume += 10;
            SetSoundVolume(sound, volume /100.0f);
        }
                if(IsKeyPressed(KEY_DOWN)&& volume >0)
        {
            volume -= 10;
            SetSoundVolume(sound, volume /100.0f);
        }

          // Clear the screen with a white color
        // TODO: Draw everything you want here



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadSound(sound);
    CloseAudioDevice();
    CloseWindow();        // Close the window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
