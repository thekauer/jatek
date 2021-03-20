#include "GUI.h"

void DrawGui(sf::RenderWindow & window,sf::Time frametime)
{
	for (GUIComponnent*c : guicomponents) {
		c->asprite.play(*c->current);
		c->asprite.update(frametime);
		window.draw(c->asprite);

	}
}
