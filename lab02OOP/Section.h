#pragma once
#include "Point.h"
class Section : public Point
{
private:
	Point* p1;
	Point* p2;
public:
	Section();

	Section(int x1, int y1, int x2, int y2);

	Section(Point& p1, Point& p2);

	Section(const Section& s);

	void move(int dx,int dy);

	float lineLength();

	~Section();
};

