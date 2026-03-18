#include <SFML/Graphics.hpp>

class Object{
    sf::Sprite object_sprite;
    double velocity;
    public:
    Object(){}
    Object(sf::Sprite new_sprite){
        object_sprite = new_sprite;
    }
    set_velocity(double new_velocity){
        velocity = new_velocity;
    }
}
