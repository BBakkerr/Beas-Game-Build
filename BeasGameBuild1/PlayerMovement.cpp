#include "PlayerMovement.h"

void Player::Init()
{
    // TODO: Set up the player's appearance and starting position.
}

void Player::PlayerMovement()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        character.move({ 0.f, -1.f });
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        character.move({ 0.f, 1.f });
    }

   
}

void Player::CatchObject() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q) && !holdingObject)
    {
        holdingObject == true;
        
    }
}
void Player::ThrowObject() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::E) && holdingObject)
    {
		holdingObject = false;
    }

}