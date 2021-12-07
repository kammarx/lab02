#pragma once
#include "Point.h"
class Line : public Point
{
private:
	Point* p1;
	Point* p2;
public:
	Line();

	Line(int x1, int y1, int x2, int y2);

	Line(Point& p1, Point& p2);

	Line(const Line& s);

	float lineLength();

	~Line();
};

