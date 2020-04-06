#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h

#include <SFML/Graphics.hpp>
using namespace sf;

 class Weather 
{	
	 
public:
	enum Rain { no_rains, rains };

	enum Wind { no_wind, ost, nord, west, east };	
		
	
	//creates or returns singleton
	static Weather* Instance();

	void update(float elapsedTime);
	void draw(RenderWindow* renderWindow);	

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
	
	//void (*weatherChangedCallback)(); 
};
#endif

