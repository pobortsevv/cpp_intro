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

Ice::Ice(void) : AMateria()
{}

Ice::Ice(std::string const & type) : AMateria(type)
{}

Ice::Ice(Ice const & obj) : AMateria(obj)
{}

Ice::~Ice(void)
{}

void	Ice::use(ICharacter & target)
{
	std::cout << target.getName() << " used unknown materia!" << std::endl;
}
