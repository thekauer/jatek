#include "Evenets.h"
#include "GUI.h"

std::vector<GUIComponnent*> guicomponents;


void EventLoop(sf::RenderWindow & window)
{
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed)
			window.close();
		if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
			window.close();

		for (auto& c : guicomponents) {
			c->HandleEvents(event);
		}

		/*
		if (event.type == sf::Event::MouseButtonPressed &&
			event.mouseButton.button == sf::Mouse::Left) { //balclick

		}
		*/
	}

}
