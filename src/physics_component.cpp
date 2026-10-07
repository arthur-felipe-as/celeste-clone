#include "header/physics_component.hpp"

PhysicsComponent::PhysicsComponent(
  Vector2 pos,
  Vector2 speed,
  Vector2 accel,
  float friction
) : pos(pos), speed(speed), accel(accel), friction(friction) {}
  
void PhysicsComponent::update(float dt) {
  // speed += accel * dt
  speed = Vector2{
    speed.x + accel.x * dt,
    speed.y + accel.y * dt
  };
  // pos += speed * dt
  pos = Vector2{
    pos.x + speed.x * dt,
    pos.y + speed.y * dt
  };
  
  // speed *= 1 - friction * dt
  speed = Vector2{
    speed.x * (1.f - friction * dt),
    speed.y * (1.f - friction * dt)
  };
}
