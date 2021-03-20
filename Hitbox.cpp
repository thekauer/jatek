#include "Hitbox.h"

Hitbox::Hitbox(sf::Vector2f & pos, sf::Vector2f & size) : Pos(pos), Size(size)
{
}

float Hitbox::Left()
{
	return Origin().x - Size.x / 2;
}

float Hitbox::Right()
{
	return Origin().x + Size.x / 2;
}

float Hitbox::Top()
{
	return Origin().y - Size.y / 2;
}

float Hitbox::Bottom()
{
	return Origin().y + Size.y / 2;
}

sf::Vector2f Hitbox::Origin() const
{
	sf::Vector2f ret;
	ret.x = Pos.x + Size.x / 2;
	ret.y = Pos.y + Size.y / 2;
	return ret;
}
