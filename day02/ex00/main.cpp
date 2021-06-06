/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: Just playing with = operator overload 
 *
 *        Version:  1.0
 *        Created:  06.06.2021 14:53:52
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
