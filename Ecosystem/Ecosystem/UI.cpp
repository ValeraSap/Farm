#include "UI.h"
#include <iostream>
#include <string>

UI::UI()
{
	menuFrameTexture.loadFromFile("Textures/GUI/menu-panel.png");			//Текстуры
	rainTexture.loadFromFile("Textures/GUI/rain_drops.png");
	windRoseTexture.loadFromFile("Textures/GUI/wind_rose.png");
	pauseButtonTexture.loadFromFile("Textures/GUI/play_pause.png");
		
	menuFrame.setTexture(menuFrameTexture);									//Спрайты
	rainNotifier.setTexture(rainTexture);
	windRose.setTexture(windRoseTexture);
	pauseButton.setTexture(pauseButtonTexture);

	gametime = GameTime::Instatce();										//Текст для Таймера
	if (!font.loadFromFile("Fonts/timefont.ttf"))
	{
		std::cerr << "error loading font";
	}
	timer.setFont(font);
	timer.setString(std::to_string(gametime->getCurrentHour())
		+ ':' + std::to_string(gametime->getCurrentMinute()));
	timer.setCharacterSize(45);
	timer.setFillColor(Color());
		
	pauseButton.setTextureRect(IntRect(0, 0, pauseButtonTexture.getSize().x/2, pauseButtonTexture.getSize().y));

	sf::Vector2f targetSize(50.0f, 50.0f); //целевой размер
	windRose.setScale(
		targetSize.x / windRose.getLocalBounds().width,						//Масштабирование текстуры
		targetSize.y / windRose.getLocalBounds().height);
	pauseButton.setScale(
		targetSize.x / pauseButton.getLocalBounds().width,
		targetSize.y / pauseButton.getLocalBounds().height);
	rainNotifier.setScale(
		targetSize.x / rainNotifier.getLocalBounds().width,
		targetSize.y / rainNotifier.getLocalBounds().height);
	menuFrame.setScale(
		400.f / menuFrame.getLocalBounds().width,
		70.f / menuFrame.getLocalBounds().height);

	/*******************************************************************************
	*getLocalBounds() возвращает размеры спрайта в системе координат самого спрайта 
	*(т.е. без изменений от вызовов setRotation, setScale().
	*getGlobalBounds() же, возвращает размеры спрайта в глобальной системе координат,
	*т.е. с учетом всех трансформаций.
	********************************************************************************/
	int spritesDistance=10; 

	menuFrame.setPosition(0, 0);											//Позиции
	int posX = 5, posY = menuFrame.getGlobalBounds().height/2;
	std::cout << posX << std::endl;

	pauseButton.setPosition(posX, posY- pauseButton.getGlobalBounds().height/2);
	posX += pauseButton.getGlobalBounds().width + spritesDistance;
	std::cout << posX << std::endl;

	timer.setPosition(posX, posY - timer.getCharacterSize() / 2);
	posX += timer.getCharacterSize() * 2.1 + spritesDistance;
	std::cout << posX << std::endl;
	//XXX
	windRose.setPosition(posX, posY - windRose.getGlobalBounds().height / 2);
	posX += windRose.getGlobalBounds().width + spritesDistance;
	std::cout << posX << std::endl;

	rainNotifier.setPosition(posX, posY - rainNotifier.getGlobalBounds().height / 2);


}

void UI::update(float elapsed) {
	gametime->update(elapsed);
	timer.setString(std::to_string(gametime->getCurrentHour()) 
		+ ':' + std::to_string(gametime->getCurrentMinute()));

}
void UI::draw(RenderWindow* rw) {
	rw->draw(menuFrame);
	rw->draw(pauseButton);
	rw->draw(timer);
	rw->draw(windRose);

}


UI::~UI()
{
}
