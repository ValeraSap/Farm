#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class GameTime {
public:
	GameTime();
	~GameTime();

	void update(float elapsedTime);
	void draw(RenderWindow* renderWindow);

	int getCurrentDay();
	int getCurrentHour();
	int getCurrentMinute();
	
private:
	int currentDay;  //Should they be static?
	int currentHour;
	int currentMinute;
	float timer;

	Text text;
	Font font;
};
