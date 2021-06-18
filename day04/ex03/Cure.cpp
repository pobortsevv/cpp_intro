/*
 * ===================================================================
 *
 *       Filename:  Cure.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 19:05:17
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(Cure const & obj) : AMateria(obj)
{}

Cure::~Cure(void)
{}

Cure *Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	increaseXP();
}
