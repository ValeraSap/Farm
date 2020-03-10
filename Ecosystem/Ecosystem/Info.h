#if !defined(__FarmClassDiagram_Info_h)
#define __FarmClassDiagram_Info_h

class Info
{
public:
	Info();
	~Info();
	/* �������� ���������� ����������� ��������� �� ���� (��������� �� ������, ����, ����� � ��.) */
	virtual void AddToField(void)=0;

protected:
private:
	int LifeSpan;
	int MaxHealth;
	int MaxSpeed;
	int MaxEnergy;
	int MaxWeight;
	int FoodPerDay;
	int AngleOfView;
	int FieldOfView;


};

#endif