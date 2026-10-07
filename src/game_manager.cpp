#include "header/game_manager.hpp"

GameManager::GameManager()
{
    player = Player();
}

void GameManager::update(float dt){
    player.update(dt);
}

void GameManager::draw()
{        
    ClearBackground(RAYWHITE);
    // main_course.scene_render();
    player.draw();
}

int GameManager::process()
{
    player.process();
    
    if (IsKeyDown(KEY_ESCAPE)) return 1;
    return 0;
}
