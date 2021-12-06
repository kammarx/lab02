#include "Line.h"
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

Line::Line(const Line& s) {
	cout << "Line(const  Line &s) - copy constructor\n";
	p1 = new Point(*(s.p1));
	p2 = new Point(*(s.p2));
}

Line::~Line() {
	delete p1;
	delete p2;
	cout << "~Line() - destructor is called\n";
}