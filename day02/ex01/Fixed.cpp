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

/*-----------------------------------------------------------------------------
 * Let us the number 10 as int then in binary representation it will look like this: 
 * 
 * 4096	2048 1024 512 256 128 64 32 16 8 4 2 1
 *  0	 0	  0	   0   0   0   0  0  0 1 0 1 0
 *
 *  When deflected by 8 (conditional) bits left in _point will store number 2560:
 *  0    1    0    1   0   0   0  0  0 0 0 0 0
 *-----------------------------------------------------------------------------*/

Fixed::Fixed(int integer) 
{
	this->_point = integer << this->_fractBits;
	std::cout << "Int constructor called" << std::endl;
}

/*-----------------------------------------------------------------------------
 * The same thing happens with float, only first it shifts 1 by 8 bits, and then 
 * this bitwise value is multiplied by the argument 
 *-----------------------------------------------------------------------------*/

Fixed::Fixed(float fl) 
{
	this->_point = roundf(fl* (1 << this->_fractBits));
	std::cout << "Int constructor called" << std::endl;
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
	return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

Fixed & Fixed::operator=(Fixed const & obj)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_point = obj.getRawBits();
	return (*this);
}

int Fixed::toInt(void) const
{
	return (this->_point >> this->_fractBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_point / (float)(1 << this->_fractBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & obj)
{
	o << obj.toFloat();
	return (o);
}
