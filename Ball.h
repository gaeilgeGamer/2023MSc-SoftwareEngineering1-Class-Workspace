#include "raylib.h"

class Ball{
    public: 
            Vector2 position; 
            float radius; 
            Color color;

            Ball(Vector2 pos, float r, Color c);

            void Draw();
            void Move(Vector2 offset);
            Vector2 GetPosition() const; 
            void SetPosition(Vector2 pos);
};