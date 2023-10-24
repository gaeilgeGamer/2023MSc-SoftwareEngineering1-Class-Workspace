#include "Ball.h"

Ball::Ball(Vector2 pos, float r, Color c): position(pos), radius(r), color(c){}

void Ball::Draw(){
    DrawCircleV(position,radius, color);
}

void Ball::Move(Vector2 offset){
    position.x += offset.x;
    position.y += offset.y;
}

Vector2 Ball::GetPosition() const{
    return position; 
}
void Ball::SetPosition(Vector2 pos){
    position = pos;
}