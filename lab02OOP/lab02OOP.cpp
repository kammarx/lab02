#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Line.h"
using namespace std;





int main()
{
	
	/*	Point p1;
		Point p2(50, 80);
		Point p3(p2);
		Point* p4 = new Point;
		Point* p5 = new Point(23, 34);
		Point* p6 = new Point(*p5);

		p2.move(10,10);
		p2.reset();
		delete p4;
		delete p5;
		delete p6;*/

		Line* s1 = new Line;
		Line* s2 = new Line(*s1);
	
		delete s1;
		delete s2;
		return 0;
}
