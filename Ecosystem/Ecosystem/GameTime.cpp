#include "GameTime.h"

#include <iostream>
#include <string>



GameTime::GameTime(): currentDay(0), currentHour(0), currentMinute(0), timer(0)
{
	if (!font.loadFromFile("Fonts/timefont.ttf"))
	{
		std::cerr << "error loading font";
	}
	text.setFont(font);	
	
	text.setString(std::to_string(currentHour)+':'+ std::to_string(currentMinute));
	text.setCharacterSize(45);
	text.setFillColor(Color());
	text.setPosition(5, 0);
}

GameTime* GameTime::instance = 0;
GameTime* GameTime::Instatce() {
	if (instance == 0)
		instance = new GameTime();
	return instance;
}

void GameTime::update(float elapsed) {

	timer += elapsed;
		
	if (timer > 1) {
		currentMinute++;
		timer = 0;
	}
	if (currentMinute > 59) {
		currentHour++;
		currentMinute = 0;
	}
	if (currentHour > 23) {
		currentDay++;
		currentHour = 0;
	}
	text.setString(std::to_string(currentHour) + ':' + std::to_string(currentMinute));

}
void GameTime::draw(RenderWindow* renderWindow) {

	renderWindow->draw(text);
}

int  GameTime::getCurrentDay() const {
	return currentDay;
}
int  GameTime::getCurrentHour() const {
	return currentHour;
}
int  GameTime::getCurrentMinute() const {
	return currentMinute;
}

GameTime::~GameTime()
{
}
