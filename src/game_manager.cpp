#include "header/game_manager.hpp"

GameManager::GameManager()
{
    player_shape = sf::CircleShape(100.0f);
    player_shape.setFillColor(sf::Color::Green);
}

void GameManager::update(sf::RenderWindow &window, float dt){
    player += player_speed * dt;
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
    {
        window.close();
    } 
    else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
    {
        if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
            window.close();
        else if (keyPressed->scancode == sf::Keyboard::Scancode::W)
            player_speed = {player_speed.x, -1.0f};
        else if (keyPressed->scancode == sf::Keyboard::Scancode::A)
            player_speed = {-1.0f, player_speed.y};
        else if (keyPressed->scancode == sf::Keyboard::Scancode::S)
            player_speed = {player_speed.x, 1.0f};
        else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
            player_speed = {1.0f, player_speed.y};
    }
    else if (const auto* keyPressed = event->getIf<sf::Event::KeyReleased>())
    {
        if (keyPressed->scancode == sf::Keyboard::Scancode::W)
            player_speed = {player_speed.x, std::max(player_speed.y, 0.0f)};
        else if (keyPressed->scancode == sf::Keyboard::Scancode::A)
            player_speed = {std::max(player_speed.x, 0.0f), player_speed.y};
        else if (keyPressed->scancode == sf::Keyboard::Scancode::S)
            player_speed = {player_speed.x, std::min(player_speed.y, 0.0f)};
        else if (keyPressed->scancode == sf::Keyboard::Scancode::D)
            player_speed = {std::min(player_speed.x, 0.0f), player_speed.y};
    }

}
