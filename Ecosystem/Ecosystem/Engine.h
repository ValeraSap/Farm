#pragma once
#include <SFML/Graphics.hpp>
#include "GrassField.h"
#include "GrassFieldCreator.h"
#include "UI.h"

using namespace sf;

class Engine
{
private:

	RenderWindow renderWindow;
	View view;
	

	Field* field;
	UI userInterface;
	GameTime* gametime;

	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	
	Engine();
	
	void start();

};