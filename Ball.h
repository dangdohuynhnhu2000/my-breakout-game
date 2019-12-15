

#pragma once
#include <iostream>
using namespace std;
#include <SFML\Graphics.hpp>
using namespace sf;

class Ball {
private:
	sf::CircleShape ball;
	float vx;
	float vy;
	bool isOnPretendMode; //cho biet ball co dang trong che do gia dinh duong di cua ball hay khong
public:
	Ball();
	~Ball();
	Ball(float size); // khoi tao voi kich thuoc cho truoc

	void drawTo(sf::RenderWindow& window); //ve bong

	void move(sf::Vector2f distance); //di chuyen theo huong vecto

	void setPretendMode(bool onOrOff);

	bool getPretendMode();
	
	void setPos(sf::Vector2f newPos); //cai dat vi tri

	sf::Vector2f getPos(); //lay vi tri hien tai

	float getRad(); //lay ban kinh

	void setVx(float vx);

	void setVy(float vy);

	float getVx();

	float getVy();

	FloatRect getPosition();

	FloatRect getGlobalBounds();
};

