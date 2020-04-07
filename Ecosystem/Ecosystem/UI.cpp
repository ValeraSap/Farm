#include "UI.h"



UI::UI()
{
	menuFrameTexture.loadFromFile("");
	rainTexture.loadFromFile("Textures/rain_drop.png");
	windRoseTexture.loadFromFile("");
	pauseButtonTexture.loadFromFile("");

	menurame.setTexture(menuFrameTexture);
	rainDrops.setTexture(rainTexture);
	windRose.setTexture(windRoseTexture);
	pauseButton.setTexture(pauseButtonTexture);

	gametime = GameTime::Instatce();
}

void UI::update(float elapsed) {
	gametime->update(elapsed);
}
void UI::draw(RenderWindow* rw) {
	rw->draw(menurame);
	rw->draw(pauseButton);
	gametime->draw(rw);

	if (rain == RAINS) {
		rw->draw(rainDrops);
	}
}


UI::~UI()
{
}
