#pragma once
class Point
{
	private:
		int x, y;
	public:
		Point();
		
		Point(int x, int y);

		Point(const Point& p);

		int getX();

		int getY();

		int setX(int x);

		int setY(int y);

		void PrintCoord();

		~Point();

		void move(int dx, int dy);

		void reset();

	};


