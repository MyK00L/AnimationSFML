#include "Animation.h"

int main() {
	sf::RenderWindow window(sf::VideoMode(128, 128), "SFML works!");
	window.setFramerateLimit(30);
	sf::Texture texture;
	texture.loadFromFile("a.png");
	Animation anim(texture, sf::IntRect(sf::Vector2i(0,64), sf::Vector2i(64,64)), 3000, 3);
	anim.setPosition(32, 32);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		anim.update();
		window.draw(anim);
		window.display();
	}

	return 0;
}