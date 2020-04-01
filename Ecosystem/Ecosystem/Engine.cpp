#include <SFML/Graphics.hpp>
#include "Engine.h"



using namespace sf;

//äîï èíôîðìàöèÿ ïî íàïèñàíèþ Engine https://proglib.io/p/pervyy-igrovoy-dvizhok-na-s-i-sfml-2019-11-19

Engine::Engine()
{

	// Получаем разрешение экрана, создаем окно SFML и View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	renderWindow.create(VideoMode(1600, 972),
		"Simple Game Engine",
		Style::Default);

	//FieldCreator* fc = new GrassFieldCreator();
	field = GrassFieldCreator().createField();          
}

void Engine::start()
{
	// Расчет времени
	Clock clock;
		
	
	while (renderWindow.isOpen())
	{
		// Перезапускаем таймер и записываем отмеренное время в dt
		Time dt = clock.restart();
		

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}
void Engine::input()
{	
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		renderWindow.close();
	}

	
}

void Engine::update(float dtAsSeconds)
{
	field->update(dtAsSeconds);
}

void Engine::draw()
{
	renderWindow.clear(Color::White);	

	// Drawing field
	field->draw(&renderWindow);	

	renderWindow.display();
}