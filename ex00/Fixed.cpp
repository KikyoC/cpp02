#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed &Fixed::operator= (const Fixed &cpy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (&cpy != this)
		this->value = cpy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
