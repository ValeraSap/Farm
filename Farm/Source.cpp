#include <iostream>
#include "Field.h"
#include <string>
using namespace std;




int main()
{
	setlocale(LC_ALL, "Rus");

	Field* field;	
	FieldCreator* fc = new GrassFieldCreator();
	field = fc->CreateField(SMALL);
	
	system("pause");
}
