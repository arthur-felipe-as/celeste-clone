#include <raylib.h>

#include <optional>
#include <iostream>
// #include "scene.hpp"
// #include "structs.hpp"
#include "player.hpp"

class GameManager
{
    // Scene main_course;
public:
    Player player;

    GameManager();
    
    void update(float dt);
    
    void draw();
    
    int process();
};
