#include "physics.hpp"
#define YELLOW     (Color){ 253, 249, 0, 255 }     // Yellow
class Player{
    PhysicsComponent phys_comp_player;
    double velocity = 0.25;
    public:

    Player(){
        phys_comp_player.pos_x = 0;
        phys_comp_player.pos_y = 0;
    }

    void update(){
        bool changed_x, changed_y;
        changed_x = false;
        changed_y = false;
        if (IsKeyDown(KEY_RIGHT)){
            phys_comp_player.vel_x = velocity;
            changed_x = true;
        }
        if (IsKeyDown(KEY_LEFT)){
            phys_comp_player.vel_x = -velocity;
            changed_x = true;
        }
        if (IsKeyDown(KEY_UP)){
            phys_comp_player.vel_y = -velocity;
            changed_y = true;
        } 
        if (IsKeyDown(KEY_DOWN)){
            phys_comp_player.vel_y = velocity;
            changed_y = true;
        }
        
        if(not changed_x){
            phys_comp_player.vel_x = 0.0;
        }
        if(not changed_y){
            phys_comp_player.vel_y = 0.0;
        }
        phys_comp_player.update();
    }
    void draw(){
        DrawCircle(phys_comp_player.pos_x, phys_comp_player.pos_y, 30.0, YELLOW);
    }
};