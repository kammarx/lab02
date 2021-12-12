#pragma once
#include "Rectangle.h"
class Cuboid : public Rectangle
{
public:
	int c;
private:
	Cuboid();

	Cuboid(int a, int b, int c);

	Cuboid(const Cuboid& cuboid);

	void print();

	int MeasureCub(Cuboid cuboid);

	~Cuboid();




};

