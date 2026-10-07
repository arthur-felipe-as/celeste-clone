#pragma once

#include <raylib.h>
#include <math.h>
#include "physics_component.hpp"

class Player {
  PhysicsComponent phys_comp;
  float player_shape; // circle radius. TODO: implement sprite

public:

  Player();
  
  void update(float dt);
  
  void draw();
  
  void process();
  void process_keys_up();
  void process_keys_down();
};
