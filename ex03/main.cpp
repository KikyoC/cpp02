#include "Point.hpp"
#include <iostream>
#include <stdio.h>

int main(void)
{
	Point *a = new Point(1, 1);
	Point *b = new Point(4, 1);
	Point *c = new Point(1, 4);
	Point *point = new Point(3, 3);

	//printf("coordinates : a(%i,%i) b(%i,%i), c(%i,%i)", a.getX().toInt(), a.getY().toInt(), b.getX().toInt(), b.getY().toInt(), c.getX().toInt(), c.getY().toInt());
	bool res = bsp(a, b, c, point);
	std::cout << "Res is: " << res << std::endl;
}
