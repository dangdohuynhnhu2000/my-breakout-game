
#pragma once
#include <SFML/Graphics.hpp>
#include <conio.h>
#include <sstream>
#include <cstdlib>
#include <iostream>
using namespace std;
using namespace sf;
#include "Paddle.h"
#include "Ball.h"
#include "Wall.h"
#include "Menu.h"
#include "GunMode.h"
#include <string>
#include <ctime>
#include <vector>
#include "Rectangle.h"
class Grid;


int random(int min, int max);
void defaultPos(Paddle& paddle1, Ball& ball); //dua ban do, bong ve vi tri mac dinh
void drawToWindow(sf::RenderWindow& window, Paddle paddle1, Ball ball, Wall wall, sf::Text Exit); //thao tac ve bang tuong bong
void changeSpeed(sf::RenderWindow& window, sf::Event& event, sf::Text& Level, int& speed, Menu); //tang giam toc do
void changeSetting(sf::RenderWindow& window, sf::Event& event, sf::Text& Level, float& defaulSpeed, float& ballSpeed, float& padSpeed, int& speed, bool& AIMode, sf::Text& Mode); //thay doi mode, speed
void changeMode(sf::RenderWindow& window, sf::Event& event, Menu optionScreen, bool& AImode, sf::Text& Mode); //doi che do 1 player hoac 2 player
void gamePlay(sf::RenderWindow& window, sf::Font font, float padSpeed, float ballSpeed, float defaultSpeed, bool& playing, bool AIMode); //thuc hien cac hoat dong cua game
void result(int scoreLeft, int scoreRight, sf::Text& Result); 
void pretendWayOfBall(RenderWindow& window, Wall wall, Ball& ball, Grid grid, float vx, float vy); //tra ve chuoi duong di gia dinh cua bong
void turnOnPretendWayMode(RenderWindow& window, Event& event, Ball& ball, float& vx, float& vy); //bat su kien dieu huong bong