#include <raylib.h>
#include <bits/stdc++.h>

#include "header/game_manager.hpp"

int main(){
    InitWindow(500, 500, "bom dia");
    GameManager game;
    
    float dt = 0.1;

    while(!WindowShouldClose()){
        game.update(dt);
        if (game.process() == 1) break;
        
        BeginDrawing();
            game.draw();
        EndDrawing();
    }
    return 0;
}
