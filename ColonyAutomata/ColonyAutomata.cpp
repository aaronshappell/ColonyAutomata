#include <iostream>

#include "ColonyAutomata.h"

ColonyAutomata::ColonyAutomata(int width, int height) : window(sf::VideoMode(width, height), "Colony Automata"), width(width), height(height) {
	pixelBuffer.create(width, height, sf::Color::White);
	pixelTexture.loadFromImage(pixelBuffer);
	pixelSprite.setTexture(pixelTexture);

	std::cout << "Application created" << std::endl;
}

void ColonyAutomata::run(){
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(pixelSprite);
		window.display();
	}
}