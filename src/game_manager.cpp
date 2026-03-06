#include "header/game_manager.hpp"

GameManager::GameManager()
    {
        player_shape = sf::CircleShape(100.0f);
        player_shape.setFillColor(sf::Color::Green);
    }

void GameManager::update(sf::RenderWindow &window, float dt){
    player.x += 0.01;
    player_shape.setPosition(player);
}

void GameManager::render(sf::RenderWindow &window)
    {
        
        window.clear();
        main_course.scene_render(window);
        window.draw(this->player_shape);
		window.display();
    }

void GameManager::process(sf::RenderWindow &window, const std::optional<sf::Event> event)
    {
        if (event->is<sf::Event::Closed>())
        window.close();
    }
