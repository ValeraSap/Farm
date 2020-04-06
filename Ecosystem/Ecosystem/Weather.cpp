#include "Weather.h"

#include <ctime>
#include <iostream>

Weather::Weather() {

	texture.loadFromFile("Textures/rain_drop.png");
	sprite.setTexture(texture);	
	sprite.setScale(0.15, 0.15);
	sprite.setPosition(0,0); //расположение на экране //0,0 - left up corner

	rain = NO_RAINS;
	wind = NO_WIND;	

	std::srand(time(0));
}

Weather* Weather::instance = 0;

Weather* Weather::Instance() {
	if (instance == 0)
		instance = new Weather();
	return instance;
}

void Weather::update(int day, int hour) {
	
	//TODO precipitation coefficient for every season to implement rain probability	
	if (rand() % 10 > 6) {
		rain = RAINS;
	}
	else {
		rain = NO_RAINS;
	}

	/*
	*Summer 0-91 days
	*Autumn 92-182 days
	*Winter 183-272 days
	*Spring 273-364 days
	*/
	//XXX
	if (day % 364 == 92) currentSeason=AUTUMN;
	else if(day % 364 == 183) currentSeason=WINTER;
	else if (day % 364 == 273) currentSeason=SPRING;
	else if (day % 364 == 0) currentSeason=SUMMER;
	
	//TODO day/night
	/*if (currentSeason == SUMMER) {

	}*/
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