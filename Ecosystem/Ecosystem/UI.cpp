#include "UI.h"
#include <iostream>
#include <string>


//https://kychka-pc.ru/sfml/urok-31-sfml-c-sozdanie-menyu.html


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

	gametime = GameTime::Instance();										//Текст для Таймера
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

}
void UI::weatherChanged(Seasons s, Rain r, Wind w, TimeOfDay t) {

	//TODO declare rain. season, etc variables 
}

void UI::update(float elapsed) {

	//if (Mouse::isButtonPressed(Mouse::Left)) {
		//Vector2i pixelPos = Mouse::getPosition(window);//забираем коорд курсора
	//}
	
	timer.setString(std::to_string(gametime->getCurrentHour()) 
		+ ':' + std::to_string(gametime->getCurrentMinute()));

}
void UI::draw(RenderWindow &window) {

	Vector2f center = window.getView().getCenter();
	Vector2f size = window.getView().getSize();

	/*******************************************************************************
*getLocalBounds() возвращает размеры спрайта в системе координат самого спрайта
*(т.е. без изменений от вызовов setRotation, setScale().
*getGlobalBounds() же, возвращает размеры спрайта в глобальной системе координат,
*т.е. с учетом всех трансформаций.
********************************************************************************/

	int spritesDistance = 10;
	menuFrame.setPosition(center.x - size.x / 2 + spritesDistance, center.y - size.y / 2 + spritesDistance);		//Позиции
	
	int posX = menuFrame.getPosition().x+spritesDistance, posY = menuFrame.getPosition().y + menuFrame.getGlobalBounds().height / 2;
	pauseButton.setPosition(posX, posY - pauseButton.getGlobalBounds().height / 2);
	posX += pauseButton.getLocalBounds().width + spritesDistance;

	timer.setPosition(posX, posY- timer.getCharacterSize()/2);
	posX += timer.getCharacterSize() * 2.1 + spritesDistance;
	
	//XXX
	windRose.setPosition(posX, posY - windRose.getGlobalBounds().height / 2);
	posX += windRose.getLocalBounds().width + spritesDistance;

	rainNotifier.setPosition(posX, posY - rainNotifier.getGlobalBounds().height / 2);

	window.draw(menuFrame);
	window.draw(pauseButton);
	window.draw(timer);
	window.draw(windRose);

}
Vector2f UI::getSpriteCoordinates()
{
	//Vector2i coord = { coord.x=menuFrame.getGlobalBounds().left };
	Vector2f coordinates(menuFrame.getGlobalBounds().left, menuFrame.getGlobalBounds().top);
	return coordinates;
}
Vector2f UI::getSpriteSize()
{
	Vector2f sizes(menuFrame.getGlobalBounds().width, menuFrame.getGlobalBounds().height);
	return sizes;
}
UI::~UI()
{
}
