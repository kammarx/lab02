#include "Line.h"
#include "Point.h"
#include <iostream>

using namespace std;


Line::Line(){
	cout << "Line() - default constructor is called\n";
	p1 = new Point();
	p2 = new Point();

}
Line::Line(int x1, int y1, int x2, int y2) {
	cout << "Line(int x1, int y1, int x2, int y2) - constructor with arguments is called";
	p1 = new Point(x1,y1);
	p2 = new Point(x2,y2);
}

Line::Line(Point& p1, Point& p2) {
	cout << "Line(Point & p1, Point & p2)";
	this->p1 = new Point(p1.getX(),p1.getY());
	this->p2 = new Point(p2.getX(), p2.getY());
}

Line::Line(const Line& s) {
	cout << "Line(const  Line &s) - copy constructor\n";
	p1 = new Point(*(s.p1));
	p2 = new Point(*(s.p2));
}

float Line::lineLength() {
	float len;
	if (p1 == 0 || p2 == 0)return 0;
	len = sqrt(pow(p2->getX() -p1->getX(),2 )+ pow(p2->getY() - p1->getY(),2));
	cout << "Length of the line: "<<len;
}

Line::~Line() {
	cout << "~Line() - destructor is called\n";
	delete p1;
	delete p2;
	
}