#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
    void Init();
    void PlayerMovement();

private:
    sf::RectangleShape character;
};