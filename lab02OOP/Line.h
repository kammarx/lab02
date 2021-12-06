#pragma once
#include "Point.h"
class Line  
{
private:
	Point* p1;
	Point* p2;
public:
	Line();

	Line(int x1, int y1, int x2, int y2);

	Line(const Line& s);

	~Line();
};

