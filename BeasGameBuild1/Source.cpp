#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <optional>
#include  <iostream>
#include  <string>
using namespace std;

// Game classes
namespace BeasGameBuild1
{
    class game {
    public:
        void Init();
        void PlayerMovement();
        void Update();
        void SpawnEnemy();
        void EnemyMovement();
        void CatchEnemy();
        void ProjectileMovement();
        void SpawnProjectile();
    };

    void game::Init() {}
    void game::PlayerMovement() {}
    void game::Update() {}
	void game::SpawnEnemy() {}
	void game::EnemyMovement() {}
	void game::CatchEnemy() {}
	void game::ProjectileMovement() {}
	void game::SpawnProjectile() {}
}

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        while (const optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
        

    }
    //program ends succesfully 
	return 0;
}
