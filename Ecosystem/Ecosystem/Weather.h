#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h

#include "config.h"

#include <SFML/Graphics.hpp>
#include "WeatherObserver.h"
#include <list>
using namespace sf;

 class Weather 
{	
	 
public:	
		
	/*Weather contains seasons and daytime? 
	*Because  weather can be synonym for climate=>
	*=> weather can be extended and implemented by many climate types
	* Day time in its turn depends on seasons
	*/
	   //how to implement cycle? => need iterator/structure?
	
	Seasons currentSeason;	
	
	//creates or returns singleton
	static Weather* Instance();

	void update(int day, int hour);
	void draw(RenderWindow* renderWindow);	

	void Attach(WeatherObserver*);
	void Detach(WeatherObserver*);
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
	
	std::list<WeatherObserver> observers;

};
#endif

