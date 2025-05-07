#include "Fixed.hpp"
#include <iostream>
#include <ostream>
#include <cmath>

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int nbr)
{
	this->value = nbr * (1 << this->raw_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float nbr)
{
	this->value = roundf(nbr * (1 << this->raw_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (&cpy != this)
		this->value = cpy.value;
	return (*this);
}

std::ostream &operator<< (std::ostream& os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}

int	Fixed::toInt() const
{
	return (this->value / (1 << this->raw_bits));
}

float Fixed::toFloat() const
{
	return ((float)this->value / (1 << this->raw_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
