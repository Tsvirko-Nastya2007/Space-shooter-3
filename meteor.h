#pragma once
#include "SFML/Graphics.hpp"

class Meteor {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	static std::string meteor_files_names[];
	float speedx;
	float speedy;
	void spawn();
public:
	Meteor();
	void update();
	void draw(sf::RenderWindow&);
};

