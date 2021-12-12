#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
	cout << "Rectangle() - default constructor is called\n";
	a = 1;
	b = 1;

}
Rectangle::Rectangle(int a,int b) {
	cout << "Rectangle(int a,int b) - constructor with arguments is called\n";
	this->a = a;
	this->b = b;
}

Rectangle::Rectangle(Rectangle& rec) {
	cout << "Rectangle(Rectangle& rec) - copy contructor is called";
	a = rec.a;
	b = rec.b;
}

void Rectangle::resetRec() {
	a = 1;
	b = 1;
}

void Rectangle::print() {
	cout << "It's rectangle";
}

int Rectangle::MeasureRec(Rectangle rec) {
	int sq = rec.a * rec.b;
	return sq;
}

