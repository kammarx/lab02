#include "Point.h"
#include <iostream>

using namespace std;

	Point::Point() {
		cout << "Point() - default constructor is called\n";
		x = 0;
		y = 0;
	}
	Point::Point(int x, int y) {
		cout << "Point(int x, int y) - constructor with arguements\n";
		this->x = x;
		this->y = y;
	}

	Point::Point(const Point& p) {
		cout << "Point(const  Point &p) - copy constructor\n";
		x = p.x;
		y = p.y;
	}

	Point::~Point() {
		cout << x << " " << y << endl;;
		cout << "~Point() - destructor is called\n";
	}

	void Point::move(int dx, int dy) {
		x = x + dx;
		y = y + dy;
	}

	void Point::reset(){
		x = 0;
		y = 0;
	}


