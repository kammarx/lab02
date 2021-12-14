#pragma once
#include "Rectangle.h"
class Cuboid : public Rectangle
{
private:
	int c;
public:
	Cuboid();

	Cuboid(int a, int b, int c);

	Cuboid(const Cuboid& cuboid);

	void print() override;

	int MeasureCub();

	~Cuboid();




};

