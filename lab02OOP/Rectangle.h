#pragma once
class Rectangle
{
protected:
	int a;
	int b;
	int square;
public:
	Rectangle();

	Rectangle(int a, int b);

	Rectangle(Rectangle& rec);

	void resetRec();

	virtual void print();

	int MeasureRec();

	~Rectangle();
};

