/*
 * ===================================================================
 *
 *       Filename:  DesertEagle.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:33:02
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "DesertEagle.hpp"

DesertEagle::DesertEagle(void) : AWeapon("Desert Eagle", 7, 31)
{}

DesertEagle::DesertEagle(DesertEagle const& obj) : AWeapon(obj)
{}

DesertEagle::~DesertEagle(void)
{}

void	DesertEagle::attack(void) const
{
	std::cout << "* Shaaaa Taaaaaa Sheeeeesh Meeeeeeash *" << std::endl;
}
