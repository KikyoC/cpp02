#include "Point.hpp"
#include <iostream>

int main(void)
{
	Point *a = new Point(1, 1);
	Point *b = new Point(4, 1);
	Point *c = new Point(1, 4);
	Point *point = new Point(3, 3);

	bool res = bsp(a, b, c, point);
	std::cout << "Res is: " << res << std::endl;
	delete point;
	
	point = new Point(2.5, 2.5);
	res = bsp(a, b, c, point);
	std::cout << "Res 2 is: " << res << std::endl;

	delete point;
	point = new Point(1, 1);
	res = bsp(a, b, c, point);
	std::cout << "Res 3 is: " << res << std::endl;

	delete a;
	delete b;
	delete c;
	delete point;
}
