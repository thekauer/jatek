#pragma once
#include <SFML\Graphics.hpp>
#include "Hitbox.h"
#include <vector>
#include "animatedsprite.hpp"
#include "animation.hpp"


class GUIComponnent : public Hitbox {
public:
	AnimatedSprite asprite;
	Animation* current;
	bool Show=true;
	virtual void HandleEvents(sf::Event& event)=0;

};

extern std::vector<GUIComponnent*> guicomponents;

void DrawGui(sf::RenderWindow& window,sf::Time frametime);