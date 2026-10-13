#pragma once
#include <SFML/Graphics.hpp>

class Player
{
public:
    void Init();
    void PlayerMovement();
	void CatchObject();
	void ThrowObject();

private:
    sf::RectangleShape character;
	bool holdingObject = false;
};