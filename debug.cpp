#include "debug.h"
#include "defaults.h"


std::vector<sf::Text> DLabels;

const sf::Vector2f offset = sf::Vector2f(500, 50);
const int heightoffset = 30;





void DrawDebug(sf::RenderWindow& window)
{
	int i = 0;
	if (DLabels.size() > 0) {
		for (int i = 0; i < DLabels.size() - 1; i++)
		{
			DLabels[i].setPosition(offset.x, offset.y + i*heightoffset);
			window.draw(DLabels[i]);
			DLabels.erase(DLabels.begin() + i);
		}
	}
	
}
