#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class GameTime {
public:
	static GameTime* Instatce();
	~GameTime();

	void update(float elapsedTime);
	void draw(RenderWindow* renderWindow);

	int getCurrentDay() const;
	int getCurrentHour() const;
	int getCurrentMinute() const;
	
private:
	GameTime();
	static GameTime* instance;

	int currentDay;  //Should they be static?
	int currentHour;
	int currentMinute;
	float timer;

	Text text;
	Font font;
};
