#include <iostream>
#include <conio.h>

using namespace std;



class Point {
public:
	int x, y;
	Point() {
		cout << "Point()\n";
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		cout << "Point(int x, int y)\n";
		this->x = x;
		this->y = y;
	}

	Point(const Point &p) {
		cout << "Point(const  Point &p)\n";
		x = p.x;
		y = p.y;
	}

};
int main()
{
	cout << "haha";



}
