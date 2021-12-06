#pragma once
#include "Point.h"
class Circle : public Point
{
protected:
	int rad;
public:
	Circle();

	Circle(int x, int y, int rad);

	Circle(Circle& p, int rad);

	~Circle();


};

