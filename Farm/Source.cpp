#include <iostream>
//#include <thread>
using namespace std;
//use threads
//patterns:abstract factory, strategy, посредник,
//тут мы будем должны применить композицию, абстрактную фабрику.
//на следующем шаге опреелить возможніе добавления паттернов при существующем функционале
//добавить функционал
enum Direction {North, South, East, West};
class MapSite {
public:
  virtual void Enter() = 0;
};
class World {
//Cells is vector
public:
  World(int n, int m){

  }
};
class Sheep{

};
class Cell{
bool isBald;
public:
  Cell(){
    isBald=false;
  }
  bool isBald(){return isBald;}
/*  void getEated(){
    isBald=true;
  }*/
};
class Tree{

};
class Stone{};
/*class Obstacle{};*/

int main()
{
	setlocale(LC_ALL, "Rus");

	system("pause");
}
