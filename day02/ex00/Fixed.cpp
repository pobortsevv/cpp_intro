/*
 * ===================================================================
 *
 *       Filename:  Fixed.cpp
 *
 *        Version:  1.0
 *        Created:  06.06.2021 14:38:30
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
 	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
	std::cout << "getRawBits member function called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_point = obj.getRawBits();
	return (*this);
}
