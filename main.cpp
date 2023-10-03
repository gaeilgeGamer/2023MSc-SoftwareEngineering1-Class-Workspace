#include <raylib.h>

int main() {
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib C++ Main Loop Example");

    Vector2 ballPosition = {(float)screenWidth/2, (float)screenHeight/2};
    float ballRadius = 50.0f;
    Color ballColor = RAYWHITE;

    SetTargetFPS(60);   // Set desired FPS

    // Main game loop
    while (!WindowShouldClose()) {    // Detect window close button or ESC key
        // Update
        // For this simple example, there's no update logic

        // Draw
        BeginDrawing();

        ClearBackground(DARKGRAY);

        DrawText("Welcome to Raylib with C++!", 10, 10, 20, RAYWHITE);
        DrawCircleV(ballPosition, ballRadius, ballColor);

        EndDrawing();
    }

    // De-initialization
    CloseWindow();     // Close window and OpenGL context

    return 0;
}
