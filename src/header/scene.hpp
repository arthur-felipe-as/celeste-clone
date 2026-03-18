#include <SFML/Graphics.hpp>
#include <vector>
#include "structs.hpp"
class Scene{
private:
    std::vector<Object> loaded_objects;
public:
    Scene();
    void scene_render(sf::RenderWindow &window);
};
