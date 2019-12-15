#pragma once

#include <SFML\Graphics.hpp>
#include "Ball.h"
#include "Paddle.h"

class Wall {
public:
	Paddle Left, Right, Top, Bottom;
	Wall();
	~Wall();
	void drawTo(sf::RenderWindow& window);
};