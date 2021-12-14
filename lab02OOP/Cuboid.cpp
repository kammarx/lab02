#include "Cuboid.h"
#include <iostream>

using namespace std;

Cuboid::Cuboid():Rectangle() {
	cout << "Cuboid() - default constructor is called";
	c = 1;
}

Cuboid::Cuboid(int a, int b, int c)
	:Rectangle(a, b) {
	cout << "Cuboid(int a, int b, int c)- constructor with arguments is called\n";
	this->c = c;
}

Cuboid::Cuboid(const Cuboid& cuboid) {
	cout << "Cuboid(const Cuboid& cuboid)-copy constructor is called\n";
	a = cuboid.a;//a and b are protected -> we can access them without getter
	b = cuboid.b;
	c = cuboid.c;
}

void Cuboid::print() {
	cout << "It's cuboid\n";
}

int Cuboid::MeasureCub() {
	int vol = MeasureRec()*c;
	return vol;
}

Cuboid::~Cuboid() {
	cout << "Cuboid destructor is called\n";
}
