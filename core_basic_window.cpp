#include "raylib.h"
#include "bits/stdc++.h"
#include "player.hpp"
int main(){
    InitWindow(500, 500, "bom dia");
    Player p;

    while(!WindowShouldClose()){
        p.update();
                            BeginDrawing();
                                ClearBackground(RAYWHITE);
                                p.draw();
                            EndDrawing();                
        
        
        
    }
    return 0;
}