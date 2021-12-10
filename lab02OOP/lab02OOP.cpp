#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Section.h"
#include "Circle.h"
using namespace std;





int main()
{
	

		Point p1;
		Point p2(50, 80);
		Point p3(p2);
		/*Point* p4 = new Point;
		Point* p5 = new Point(23, 34);
		Point* p6 = new Point(*p5);*/

		p2.move(10,10);
		/*delete p4;
		delete p5;
		delete p6;*/

	    Section* s1 = new Section(6,3,7,2);
		Section* s2 = new Section(*s1);
		s1->move(10,10);

	
		delete s1;
		delete s2;
		return 0;
}
