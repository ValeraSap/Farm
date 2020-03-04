#include <SFML/Graphics.hpp>
#include "Engine.h"
using namespace sf;

//доп информация по написанию Engine https://proglib.io/p/pervyy-igrovoy-dvizhok-na-s-i-sfml-2019-11-19

Engine::Engine()
{

	// Получаем разрешение экрана, создаем окно SFML и View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y),
		"Simple Game Engine",
		Style::Fullscreen);

}

void Engine::start()
{
	// Расчет времени
	Clock clock;

	while (m_Window.isOpen())
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
	// Обрабатываем нажатие Escape
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	// Обрабатываем нажатие клавиш движения
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		
	}
	else
	{
		
	}

	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		
	}
	else
	{
		
	}

}
void Engine::update(float dtAsSeconds)
{
	// mBob.Update();
}
void Engine::draw()
{
	// Стираем предыдущий кадр
	m_Window.clear(Color::White);

	m_Window.display();
}