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

	view.reset(sf::FloatRect(0, 0, renderWindow.getSize().x,
		renderWindow.getSize().y));

	gametime = GameTime::Instance();
	weather = Weather::Instance();	
	field = new GrassField(FieldSize::MEDIUM);

}

void Engine::start()
{	
	Clock clock;
	double lag = 0.0;	
	
	while (renderWindow.isOpen())
	{
													// Перезапускаем таймер и записываем отмеренное время в dt
		Time dt = clock.restart();					//dt contain how much time elapsed since the clock was started
		float elapsed = dt.asSeconds();				//время кадра в секундах в переменную 
		lag += elapsed;
						
		input();

		while (lag >= MS_PER_UPDATE)	
		{			
			update(elapsed);
			lag -= MS_PER_UPDATE;
		}

		update(elapsed);
		draw();
	}
}
void Engine::input()
{	
	int fieldEndX = field->getSize().first, fieldEndY = field->getSize().second;
																				//Перемещение по экрану
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		renderWindow.close();
	}
	if (Keyboard::isKeyPressed(Keyboard::D))//Лучше вложенность или длинные списки условий?
	{
		if(view.getCenter().x+ view.getSize().x/2 <= fieldEndX)
			view.move(1.f, 0);
	}
	if (Keyboard::isKeyPressed(Keyboard::A)) 
	{
		if(view.getCenter().x - view.getSize().x / 2 >=0)
			view.move(-1.f, 0);
	}
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		if (view.getCenter().y - view.getSize().y / 2 >= 0)
			view.move(0, -1.f);
	}
	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		if (view.getCenter().y + view.getSize().y / 2 <= fieldEndY)
			view.move(0, 1.f);
	}

																	//отслеживание кликов мышью
	if (Mouse::isButtonPressed(Mouse::Left))
	{
		Vector2i pixelPos = Mouse::getPosition(renderWindow);		//забираем коорд курсора
		Vector2f pos = renderWindow.mapPixelToCoords(pixelPos);		// переводим их в игровые(уходим от коорд окна)
		if (pos userInterface.) //проверка попадания 1)GUI 2)Интерактивные объекты поля 3) поле и прочее
		{

		}
	}
	
}

void Engine::update(float elapsed)
{
	gametime->update(elapsed);
	weather->update(gametime->getCurrentDay(), gametime->getCurrentHour());         //TODO smth...
	field->update(elapsed);
	userInterface.update(elapsed);
}

void Engine::draw()
{
	renderWindow.clear(Color::White);	

	renderWindow.setView(view);

	field->draw(&renderWindow);

	userInterface.draw(renderWindow);	
	
	

	renderWindow.display();
}