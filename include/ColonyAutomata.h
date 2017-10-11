#pragma once

#include <SFML/Graphics.hpp>

#include "Person.h"

class ColonyAutomata{
public:
	ColonyAutomata(int width, int height);
	~ColonyAutomata();
	void run();
private:
	int width;
	int height;
	sf::RenderWindow window;
	sf::Image pixelBuffer;
	sf::Texture pixelTexture;
	sf::Sprite pixelSprite;
	Person *people;
	void update(float delta);
	void render();
	void pollInput(float delta);
	void pollEvents();
};