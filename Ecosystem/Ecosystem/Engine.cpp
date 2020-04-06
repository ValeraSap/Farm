#include <SFML/Graphics.hpp>
#include "Engine.h"
#include "config.h"
#include <iostream>
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
	double lag = 0.0;
	
	
	while (renderWindow.isOpen())
	{
		// Перезапускаем таймер и записываем отмеренное время в dt
		Time dt = clock.restart();	 //dt contain how much time elapsed since the clock was started
		float elapsed = dt.asSeconds(); //время кадра в секундах в переменную 
		lag += elapsed;

		//std::cout << dt.asMicroseconds() << std::endl;

		input();

		while (lag >= MS_PER_UPDATE) { 
			update(elapsed);
			lag -= MS_PER_UPDATE;
		}

		update(elapsed);
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