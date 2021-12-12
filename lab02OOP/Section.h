#pragma once
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

class Section
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

	static void lineLength(Point* p1, Point* p2) {
		double len;
		if (p1 == 0 || p2 == 0)return;
		len = sqrt(pow(p2->getX() - p1->getX(), 2) + pow(p2->getY() - p1->getY(), 2));
		cout << "Length of the line: "<<len<<"\n";
	}


	~Section();
};

