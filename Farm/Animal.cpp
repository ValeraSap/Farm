enum Animals{SHEEP, COW};
class Animal {
public:
	void Move();
	void Eat();
	void Idle();
};
class AnimalCreator {
public:
	AnimalCreator() {
		CreateAnimal(Animals);
	}
	virtual Animal CreateAnimal(Animals) = 0; //fabric method
};
class SheepCreator :public AnimalCreator {
public:
	Animal CreateAnimal(Animals);
};
class Sheep: public Animal{

};
