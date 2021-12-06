#include "Circle.h"

Circle::Circle() {
	Point* p = new Point();
	rad = 1;
}

Circle::Circle(int x, int y, int rad):Point(x,y),rad(rad) {
	
}

Circle::Circle(Circle& p, int rad) {

}

Circle::~Circle() {

}
