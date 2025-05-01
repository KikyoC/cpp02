#include "Point.hpp"
#include <iostream>

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
	std::cout << "Default constructor called" << std::endl; 
}

Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y))
{
	std::cout << "Default constructor called with parematers" << std::endl; 
}

Point::Point(const Point &cpy)
{
	*this = cpy;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}


Point &Point::operator=(const Point &cpy)
{
	(void)cpy;
	return (*this);
}
