#include "Section.h"
#include "Point.h"
#include <iostream>

using namespace std;


Section::Section(){
	cout << "Section() - default constructor is called\n";
	p1 = new Point();
	p2 = new Point();

}
Section::Section(int x1, int y1, int x2, int y2) {
	cout << "Section(int x1, int y1, int x2, int y2) - constructor with arguments is called\n";
	p1 = new Point(x1,y1);
	p2 = new Point(x2,y2);
}

Section::Section(Point& p1, Point& p2) {
	cout << "Section(Point & p1, Point & p2)";
	this->p1 = new Point(p1.getX(),p1.getY());
	this->p2 = new Point(p2.getX(), p2.getY());
}

Section::Section(const Section& s) {
	cout << "Section(const  Section &s) - copy constructor\n";
	p1 = new Point(*(s.p1));
	p2 = new Point(*(s.p2));
}

void Section::move(int dx, int dy) {
	p1->setX(p1->getX() + dx);
	p1->setY(p1->getY() + dy);
	p2->setX(p2->getX() + dx);
	p2->setY(p2->getY() + dy);

}

Section::~Section() {
	cout << "~Section() - destructor is called\n";
	delete p1;
	delete p2;
	
}