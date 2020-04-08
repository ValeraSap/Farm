#include "UI.h"
#include <iostream>
#include <string>

UI::UI()
{
	menuFrameTexture.loadFromFile("");
	rainTexture.loadFromFile("Textures/GUI/rain_drops.png");
	windRoseTexture.loadFromFile("Textures/GUI/wind_rose.png");
	pauseButtonTexture.loadFromFile("Textures/GUI/play_pause.png");

	menuFrame.setTexture(menuFrameTexture);
	rainNotifier.setTexture(rainTexture);
	windRose.setTexture(windRoseTexture);
	pauseButton.setTexture(pauseButtonTexture);

	gametime = GameTime::Instatce();
	if (!font.loadFromFile("Fonts/timefont.ttf"))
	{
		std::cerr << "error loading font";
	}
	timer.setFont(font);

	timer.setString(std::to_string(gametime->getCurrentHour())
		+ ':' + std::to_string(gametime->getCurrentMinute()));
	timer.setCharacterSize(45);
	timer.setFillColor(Color());
	
	menuFrame.setPosition(0, 0);

	int posX = 2, posY = 2;
	pauseButton.setPosition(posX, posY);
	posX += pauseButton.getTextureRect().left; //width
	timer.setPosition(posX, posY);
	posX += timer.getCharacterSize() * 5; //XXX
	windRose.setPosition(posX, posY);
	posX += windRose.getTextureRect().left;
	rainNotifier.setPosition(posX, posY);
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

	if (rain == RAINS) {
		rw->draw(rainNotifier);
	}
}


UI::~UI()
{
}
