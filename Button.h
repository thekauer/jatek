#pragma once
#include <SFML\Graphics.hpp>
#include "animation.hpp"
#include "animatedsprite.hpp"
#include "GUI.h"


class Button : public GUIComponnent {
public:
	Button();
	Button(const Button&) = default;
	Button(Animation& hoover, Animation& defanim, Animation& clicked);
	void SetCallBack(void(*f)(Button&));
	void HandleEvents(sf::Event& event);
private:
	void(*callback)(Button&);
	Animation aHoover, aDefault, aClicked;
	
};

