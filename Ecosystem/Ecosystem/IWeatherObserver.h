#pragma once
/*
* everyone who cares adout weather, season, time of day changes 
* should be inherited from it
*/
#include "config.h"
class IWeatherObserver

{
public:
	
	virtual void weatherChanged(Seasons, Rain, Wind, TimeOfDay)=0; 	

	//IWeatherObserver();
	//virtual ~IWeatherObserver();
};

