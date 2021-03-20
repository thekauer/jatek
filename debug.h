#pragma once
#include <type_traits>
#include <SFML\Graphics.hpp>
#include <vector>
#include <iostream>
#include "defaults.h"


extern std::vector<sf::Text> DLabels;





template<typename T>
void Debug(std::string name ,T item) {
	std::string label = "";
	sf::Text text(*Default::text);
	label = name +": "+ std::to_string(item);
	text.setString(label);
	DLabels.push_back(text);
}


void DrawDebug(sf::RenderWindow& window);

