#include <SFML/Graphics.hpp>

#include <optional>
#include <iostream>

#include "structs.hpp"

class GameManager
{
public:
    sf::Vector2f player = {0.0, 0.0};
    sf::CircleShape player_shape;
    
    GameManager()
    {
        player_shape = sf::CircleShape(100.0f);
        player_shape.setFillColor(sf::Color::Green);
    }
    
    void update(sf::RenderWindow &window, float dt)
    {
        player.x += 0.01;
        player_shape.setPosition(player);
    }
    
    void render(sf::RenderWindow &window)
    {
        window.clear();
        window.draw(this->player_shape);
		window.display();
    }
    
    void process(sf::RenderWindow &window, const std::optional<sf::Event> event)
    {
        if (event->is<sf::Event::Closed>())
            window.close();
    }
};
