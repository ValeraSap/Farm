#include "Weather.h"

#include <ctime>
#include <iostream>

Weather::Weather() {

	texture.loadFromFile("Textures/rain_drop.png");
	sprite.setTexture(texture);	
	sprite.setScale(0.15, 0.15);
	sprite.setPosition(0,0); //расположение на экране //0,0 - left up corner

	rain = no_rains;
	wind = no_wind;	

	std::srand(time(0));
}

Weather* Weather::instance = 0;

Weather* Weather::Instance() {
	if (instance == 0)
		instance = new Weather();
	return instance;
}

void Weather::update(float elapsed) {	

	//TODO class that count time and seasons!!
	//TODO precipitation coefficient for every season to implement rain probability
	
	if (rand() % 10 > 6) {
		rain = rains;
	}
	else {
		rain = no_rains;
	}
}
void Weather::draw(RenderWindow* renderWindow) {

	if (rain) {
		renderWindow->draw(sprite);
	}
		
}
Weather::~Weather()
{
	//_instance is static. does it mean we don't need to call function delete for it
}