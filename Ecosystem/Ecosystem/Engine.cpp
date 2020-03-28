#include <SFML/Graphics.hpp>
#include "Engine.h"



using namespace sf;

//��� ���������� �� ��������� Engine https://proglib.io/p/pervyy-igrovoy-dvizhok-na-s-i-sfml-2019-11-19

Engine::Engine()
{

	// �������� ���������� ������, ������� ���� SFML � View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y),
		"Simple Game Engine",
		Style::Fullscreen);

	field = GrassFieldCreator().CreateField();
}

void Engine::start()
{
	// ������ �������
	Clock clock;
		
	
	while (m_Window.isOpen())
	{
		// ������������� ������ � ���������� ���������� ����� � dt
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}
void Engine::input()
{
	// ������������ ������� Escape
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	
}
void Engine::update(float dtAsSeconds)
{
	field->Update();
}
void Engine::draw()
{
	// ������� ���������� ����
	m_Window.clear(Color::White);
	//field->Draw();
	m_Window.display();
}