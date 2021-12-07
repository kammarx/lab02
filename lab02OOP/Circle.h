#pragma once
#include "Point.h"
class Circle : public Point
{
protected:
	int r;
	Point* pc;
public:
	Circle();

	Circle(int x, int y, int rad);

	Circle(Circle& c);

	~Circle();


};

