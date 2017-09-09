#include <iostream>
#include <SFML/Graphics.hpp>

int width = 200;
int height = 200;

int main(){
	sf::RenderWindow window(sf::VideoMode(width, height), "Colony Automata");

	sf::Image pixelBuffer;
	pixelBuffer.create(width, height, sf::Color::White);

	sf::Texture pixelTexture;
	pixelTexture.loadFromImage(pixelBuffer);

	sf::Sprite pixelSprite;
	pixelSprite.setTexture(pixelTexture);

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

	return 0;
}