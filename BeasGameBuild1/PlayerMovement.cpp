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

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        // TODO: Release the held projectile.
    }
}