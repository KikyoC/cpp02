#pragma once
#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(float x, float y);
		Point(const Point &cpy);
		Point &operator=(const Point &cpy);
		Fixed getX() const;
		Fixed getY() const;

	private:
		const Fixed x;
		const Fixed y;

};


bool bsp(Point const *a, Point const *b, Point const *c, Point const *point);
