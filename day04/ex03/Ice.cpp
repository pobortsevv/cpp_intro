/*
 * ===================================================================
 *
 *       Filename:  Ice.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 19:05:17
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{}

Ice::Ice(Ice const & obj) : AMateria(obj)
{}

Ice::~Ice(void)
{}

Ice *Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	increaseXP();
}
