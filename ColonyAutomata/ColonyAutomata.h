#pragma once

#include <SFML/Graphics.hpp>

class ColonyAutomata{
public:
	ColonyAutomata(int width, int height);
	void run();
private:
	int width;
	int height;
	sf::RenderWindow window;
	sf::Image pixelBuffer;
	sf::Texture pixelTexture;
	sf::Sprite pixelSprite;
	void update(float delta);
	void render();
	void pollInput(float delta);
	void pollEvents();
};