#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle() {
	pc = new Point();
	r=0;
}

Circle::Circle(int x, int y, int rad)
	: Point(x,y),r(rad)
{

	cout << "Circle(int x, int y, int rad) constructor with arguments is called "<<x<< " "<<y<<" "<<rad;
}

Circle::Circle(Circle& c)
	: Point(c), r(c.r)
{
	cout << "Circle copy constructor is called\n";
}



Circle::~Circle() {
	cout << "destructor Circle: " << x<< " "<< y <<" "<< r<<endl;
}
