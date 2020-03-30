#include "Weather.h"



//Weather::Weather(Field* f)
//{
//	field = f;
//}

Weather::Weather() {

}
Weather::~Weather()
{
}
Weather* Weather::_instance = 0;
//Weather* Weather::getWeather(Field* f) {	
//	if (_instance == 0)
//		_instance = new Weather(f);
//	return _instance;
//}
Weather* Weather::getWeather() {
	if (_instance == 0)
		_instance = new Weather();
	return _instance;
}