class Scene{
    private:
    std::vector<sf::Sprite> loaded_objects;
    public:
    Scene();
    void scene_render(sf::RenderWindow &window);
};