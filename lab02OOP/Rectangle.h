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

	int recSquare(int a, int b);

	void resetRec();

	virtual void print();

	int MeasureRec(Rectangle rec);
};

