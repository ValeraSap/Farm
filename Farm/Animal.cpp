enum Animals{SHEEP, COW};
class Animal {
public:
	virtual void Move();
	virtual void Eat();
	virtual void Idle();
};
class Sheep :public Animal {
	void Move();
	void Eat();
	void Idle();
};
