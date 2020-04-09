#include "Weather.h"

#include <ctime>
#include <iostream>

Weather::Weather() {
	
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

	//TODO анимация дождя, если она однажды будет
		
}


Weather::~Weather()
{
	//_instance is static. does it mean we don't need to call function delete for it
}