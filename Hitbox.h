#pragma once
#include <SFML\Graphics.hpp>
class Hitbox {
public:
	sf::Vector2f Pos, Size;
	Hitbox() = default;
	Hitbox(sf::Vector2f& pos, sf::Vector2f& size);
	sf::Vector2f Origin() const;
	float Left();
	float Right();
	float Top();
	float Bottom();
	
};