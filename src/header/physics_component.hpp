#pragma once
#include <raylib.h>

class PhysicsComponent {
public:
  
  Vector2 pos;
  Vector2 speed;
  Vector2 accel;
  float friction;

  PhysicsComponent(
    Vector2 pos = {0., 0.},
    Vector2 speed = {0., 0.},
    Vector2 accel = {0., 0.},
    float friction = 0
  );
  
  void update(float dt);
};
