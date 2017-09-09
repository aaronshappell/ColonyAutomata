#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(){
	sf::RenderWindow window(sf::VideoMode(200, 200), "Colony Automata");
	sf::CircleShape shape(50);
	shape.setFillColor(sf::Color::White);
	cout << "meow" << endl;

	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}