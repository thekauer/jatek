#include <iostream>
#include <SFML\Graphics.hpp>
#include "Evenets.h"
#include "debug.h"
#include <fstream>
#include <memory>
#include "defaults.h"
#include <Windows.h>
#include "Button.h"
#include "windowptr.h"
#include "GUI.h"

sf::RenderWindow* Window;


void SetUpDefaults() {
	Default::font->loadFromFile("C:/Windows/Fonts/arial.ttf");

	Default::text->setFillColor(sf::Color::Black);
	Default::text->setCharacterSize(20);
	Default::text->setFont(*Default::font);
	Default::text->setString("");

}

int main() {
	int frameLimit = 60;
	sf::Vector2i screenDimensions(800, 600);
	sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "");
	window.setFramerateLimit(frameLimit);

	Window = &window;
	
	//FreeConsole();

	sf::Clock frameClock;
	sf::Time frametime;
	SetUpDefaults();



	//test
	Animation a;
	sf::Texture texture;
	texture.loadFromFile("block.png");
	a.setSpriteSheet(texture);
	a.addFrame(sf::IntRect(0, 0, 128, 96));

	Button b;
	b.asprite = AnimatedSprite(sf::seconds(0.2), true, false);
	b.asprite.setAnimation(a);
	b.Pos = b.asprite.getPosition();
	b.Size = sf::Vector2f(b.asprite.getLocalBounds().width, b.asprite.getLocalBounds().height);
	b.current = &a;

	//test vége
	//loadmenu();

	std::cout << guicomponents.size();
	sf::Vector2f ppos = sf::Vector2f(100, 100);

	while (window.isOpen()) {
		frametime = frameClock.restart(); //elvileg delta idõ
		EventLoop(window);


		

		window.clear(sf::Color(255, 255, 255));
		//draw
		DrawDebug(window);
		DrawGui(window, frametime);
		window.display();


	}

	return 0;
}