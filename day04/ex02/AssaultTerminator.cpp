/*
 * ===================================================================
 *
 *       Filename:  AssaultTerminator.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 17:16:06
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & obj)
{
	*this = obj;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine *AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator(*this));
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
