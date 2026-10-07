#include "header/player.hpp"

#include <iostream>

Player::Player() : phys_comp({10., 10.}, {}, {}, 0.01) {
  player_shape = 100;
}
  
void Player::update(float dt) {
  phys_comp.update(dt);
}

void Player::draw() {
  DrawCircleV(phys_comp.pos, player_shape, DARKBLUE);
}

void Player::process() {
  process_keys_up();
  process_keys_down();
  
  std::cout << phys_comp.accel.x << ' ' << phys_comp.accel.y << '\n';
}

void Player::process_keys_down() {
  float acceleration = 0.005f;
  
  if (IsKeyDown(KEY_W))
    phys_comp.accel = Vector2{ phys_comp.accel.x, -acceleration };
  if (IsKeyDown(KEY_A))
    phys_comp.accel = Vector2{ -acceleration, phys_comp.accel.y };
  if (IsKeyDown(KEY_S))
    phys_comp.accel = Vector2{ phys_comp.accel.x, acceleration };
  if (IsKeyDown(KEY_D))
    phys_comp.accel = Vector2{ acceleration, phys_comp.accel.y };
}

void Player::process_keys_up() {
  if (IsKeyUp(KEY_W) && IsKeyUp(KEY_S))
    phys_comp.accel = {phys_comp.accel.x, 0.f};
  if (IsKeyUp(KEY_A) && IsKeyUp(KEY_D))
    phys_comp.accel = {0.f, phys_comp.accel.y};
}

