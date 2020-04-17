#pragma once
/*****************************************************************
*	Weather contains seasons and daytime,
*	because  weather can be synonym for climate=>
*	=> weather can be extended and implemented by many climate types
*	 Day time in its turn depends on seasons (longing)
***********************************************************************/
#include "config.h"
#include <SFML/Graphics.hpp>
#include "IWeatherObserver.h"
#include <list>
using namespace sf;

 class Weather 
{	
	 
public:			
	
	   //how to implement cycle? => need iterator/structure?
	
	Seasons currentSeason;	
	
	//creates or returns singleton
	static Weather* Instance();

	void update(int day, int hour);
	void draw(RenderWindow* renderWindow);	

	void Attach(IWeatherObserver*);
	void Detach(IWeatherObserver*);
	void Notify();


	 ~Weather();
protected:	
	Weather();
private:
	
	static Weather* instance; //contain singleton	

	Texture texture;
	Sprite sprite;	
	IntRect rectangle;	

	Rain rain;
	Wind wind;	
	

	std::list<IWeatherObserver*> observers;

};


