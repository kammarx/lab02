#pragma once
class Point
{
	protected:
		int x, y;
	public:
		Point();
		
		Point(int x, int y);

		Point(const Point& p);

		~Point();

		void move(int dx, int dy);

		void reset();

	};


