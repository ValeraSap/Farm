#pragma once
#include "config.h"
class IWeatherObserver
	/*
	*everyone who cares adout weather, season, time of day been changed should be inherited from it
	*/
{
public:
	virtual void seasonChanged(Seasons)=0;
	virtual void timeOfDayChanged(TimeOfDay)=0;

	//virtual void rainChanged()=0;
	//virtual void windChanged()=0;

	IWeatherObserver();
	~IWeatherObserver();
};

