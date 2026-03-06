#include <SFML/Graphics.hpp>

#include <optional>
#include <iostream>
#include "scene.hpp"
#include "structs.hpp"

class GameManager
{
Scene main_course;
public:
    sf::Vector2f player = {0.0, 0.0};
    sf::CircleShape player_shape;
    

    GameManager();
    
    void update(sf::RenderWindow &window, float dt);
    
    void render(sf::RenderWindow &window);
    
    void process(sf::RenderWindow &window, const std::optional<sf::Event> event);
};
