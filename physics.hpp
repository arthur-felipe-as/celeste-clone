struct PhysicsComponent
{
    double pos_x,pos_y;
    double vel_x, vel_y;
    void update(){
        pos_x += vel_x;
        pos_y += vel_y;
    }
};
