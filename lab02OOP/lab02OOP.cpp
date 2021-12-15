#include <iostream>
#include <conio.h>
#include "Point.h"
#include "Section.h"
#include "Rectangle.h"
#include "Cuboid.h"
using namespace std;





int main()
{
	
	printf("Static objects: \n\n");
	Rectangle rtg1;
	Rectangle rtg2(2, 4);
	Rectangle rtg3(rtg2);
	Point p1;
	Point p2(p1);

	printf("---------------------------\n");

	printf("Dynamic objects: \n\n");
	Rectangle* rtg4 = new Rectangle();
	Rectangle* rtg5 = new Rectangle(4, 7);
	Rectangle* rtg6 = new Rectangle(*rtg4);

	printf("---------------------------\n");

	printf("Calling object methods\n\n");
	rtg5->resetRec();
	printf("Square of rectangle ¹ 5 = %d\n", rtg5->MeasureRec());
	p2.move(10,10);
	printf("---------------------------\n");

	printf("Calling an object of a descendant class\n\n");
	Cuboid* cub1 = new Cuboid(4, 2, 6);
	delete cub1;

	printf("---------------------------\n");

	printf("Calling an object of a descendant class with a pointer variable of the ancestor type\n\n");
	Rectangle* fig1 = new Cuboid(6, 4, 5);
	Cuboid* fig2 = new Cuboid(6, 4, 5);
	fig1->print();

	delete fig1;
	delete fig2;

	printf("---------------------------\n");


	printf("Creating a class object with a composition\n\n");
	Section* s1 = new Section(3, 6, 5, 9);
	Section* s2 = new Section(*s1);
	s2->move(10,10);

	printf("---------------------------\n");

	printf("Deleting dynamic class objects\n\n");
	delete rtg4;
	delete rtg5;
	delete rtg6;
	delete s1;
	delete s2;



	printf("---------------------------\n");
	printf("Deleting static class objects\n\n");
		return 0;
}
