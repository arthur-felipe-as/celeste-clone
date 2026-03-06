#include <SFML/Graphics.hpp>

#include "header/game_manager.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 1000, 1000 }), "SFML works!");
	
	GameManager game;

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
            game.process(window, event);
		}

		game.update(window, 1.0); // TODO: delta time calculation
		game.render(window);
	}
}
