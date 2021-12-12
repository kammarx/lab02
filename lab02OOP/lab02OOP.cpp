#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Section.h"
using namespace std;





int main()
{
	Section* s1 = new Section;
	Section* s2 = new Section(*s1);
	
	delete s1;
	delete s2;
		//Point p(4,2);
		//Point* p1 = new Point(3,5);
		//Point* p2 = new Point(2,2);
		//Section::lineLength(p1,p2);
		//Point* p3 = new Point(*p1);

		//p.move(10,10);
		///*delete p4;
		//delete p5;
		//delete p6;*/

	 //   Section* s1 = new Section(6,3,7,2);
		//Section* s2 = new Section(*s1);
		////s1->move(10,10);

		//delete p1;
		//delete p2;
		//delete p3;
		//delete s1;
		//delete s2;
		return 0;
}
