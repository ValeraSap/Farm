#include "Weather.h"

#include <ctime>
#include <iostream>

Weather::Weather() {

	texture.loadFromFile("Textures/rain_drop.png");
	sprite.setTexture(texture);	
	sprite.setScale(0.15, 0.15);
	sprite.setPosition(0,0); //расположение на экране //0,0 - left up corner

	rain = false;
	wind = no_wind;
	season = summer;

	std::srand(time(0));
}
Weather::~Weather()
{
	//_instance is static. does it mean we don't need to call function delete for it
}
Weather* Weather::instance = 0;

Weather* Weather::getWeather() {
	if (instance == 0)
		instance = new Weather();
	return instance;
}


void Weather::update(float elapsedTime) {
	
	
	//Need precipitation coefficient for every season to implement rain probability	
	if (season == summer) {
		if (rand() % 10 > 6)
			rain = true;
		else rain = false;
	}
}
void Weather::draw(RenderWindow* renderWindow) {

	if (rain) {
		renderWindow->draw(sprite);
	}
		
}