#include "Button.h"
#include <iostream>
#include "debug.h"
#include "windowptr.h"

Button::Button()
{
	guicomponents.push_back(this);
}

Button::Button(Animation & hoover, Animation & defanim, Animation & clicked) : aHoover(hoover),aDefault(defanim),aClicked(clicked)
{
	asprite = AnimatedSprite(sf::seconds(0.2),true,false);
	asprite.setOrigin(asprite.getLocalBounds().width / 2, asprite.getLocalBounds().height / 2);
	//guicomponents.push_back(this);
}

void Button::SetCallBack(void(*f)(Button &))
{
	callback = f;
}

void Button::HandleEvents(sf::Event& event)
{
	sf::Vector2i v = sf::Mouse::getPosition(*Window);
	if (v.x >  Left() && v.x < Right() && v.y < Bottom() && v.y >  Top()) {
		if (event.type == sf::Event::MouseButtonPressed &&
			event.mouseButton.button == sf::Mouse::Left) { //balclick
			if(callback)
			callback(*this);

		}
	}

}
