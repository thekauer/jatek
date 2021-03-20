#pragma once
#include <memory>
#include <SFML\Graphics.hpp>
#include "animation.hpp"
#include "animatedsprite.hpp"

namespace Default {
	const std::shared_ptr<sf::Font> font(new sf::Font);
	const std::shared_ptr<sf::Text> text(new sf::Text);
}