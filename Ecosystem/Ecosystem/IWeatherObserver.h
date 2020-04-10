#pragma once
#include "config.h"
class IWeatherObserver
	/*
	*everyone who cares adout weather, season, time of day changes should be inherited from it
	*/
{
public:
	
	virtual void weatherChanged(Seasons, Rain, Wind, TimeOfDay)=0; 	

	//IWeatherObserver();
	//virtual ~IWeatherObserver();
};

