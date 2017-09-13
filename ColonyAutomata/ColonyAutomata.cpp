#include <iostream>

#include "ColonyAutomata.h"

ColonyAutomata::ColonyAutomata(int width, int height) : window(sf::VideoMode(width, height), "Colony Automata"), width(width), height(height) {	
	std::cout << "People memory allocated" << std::endl;
	people = new Person[width * height];
	/*
	for(int r = 0; r < height; r++){
		for(int c = 0; c < width; c++){
			people[r * width + c].create();
		}
	}
	*/
	pixelBuffer.create(width, height, sf::Color::White);
	pixelTexture.loadFromImage(pixelBuffer);
	pixelSprite.setTexture(pixelTexture);
}

ColonyAutomata::~ColonyAutomata(){
	std::cout << "Deconstructing ColonyAutomata" << std::endl;
	delete[] people;
}

void ColonyAutomata::run(){
	sf::Clock clock;
	while(window.isOpen()){
		float delta = clock.restart().asSeconds();
		std::cout << delta << std::endl;
		pollEvents();
		pollInput(delta);
		update(delta);
		render();
	}
}

void ColonyAutomata::update(float delta){
}

void ColonyAutomata::render(){
	window.clear(sf::Color::Black);
	window.draw(pixelSprite);
	window.display();
}

void ColonyAutomata::pollInput(float delta){
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
		pixelSprite.move(sf::Vector2f(0, -100) * delta);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
		pixelSprite.move(sf::Vector2f(-100, 0) * delta);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
		pixelSprite.move(sf::Vector2f(0, 100) * delta);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
		pixelSprite.move(sf::Vector2f(100, 0) * delta);
	}
}

void ColonyAutomata::pollEvents(){
	sf::Event event;
	while(window.pollEvent(event)){
		if(event.type == sf::Event::Closed){
			window.close();
		}
	}
}