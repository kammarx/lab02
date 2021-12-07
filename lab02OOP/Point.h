#pragma once
class Point
{
	protected:
		int x, y;
	public:
		Point();
		
		Point(int x, int y);

		Point(const Point& p);

		int getX();

		int getY();

		void PrintCoord();

		~Point();

		void move(int dx, int dy);

		void reset();

	};


