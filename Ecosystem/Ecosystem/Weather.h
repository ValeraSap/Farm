#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h
#include "Animator.h"
#include <SFML/Graphics.hpp>
using namespace sf;

 class Weather 
{	
	 
public:

	void update(float elapsedTime);	
	
	//creates or returns singleton
	static Weather* getWeather();
	
	void draw(RenderWindow* renderWindow);

/*---------------Access attention----------------
-------------------------------------------------
---in this point may appear some problems with---
---possibility to change variables states from---
---the outside of the class. Using getters and --
---setters isn't comfortable. Making them const--
---will destroy ability to chancge them from the-
---inside----------------------------------------
-----------------------------------------------*/
	 bool rain;																			//make this variables static leads to link errors. why?
	 enum Wind{no_wind, ost, nord, west, east} wind;

	 enum Seasons{summer, autumn, winter, spring} season;   //how to implement cycle? => need iterator/structure?

	 ~Weather();
protected:	
	Weather();
private:
	
	static Weather* instance; //contain singleton

	Texture texture;
	Sprite sprite;	
	IntRect rectangle;	
	
	
};
#endif

