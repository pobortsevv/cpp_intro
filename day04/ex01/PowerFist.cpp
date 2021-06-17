/*
 * ===================================================================
 *
 *       Filename:  PowerFist.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:33:02
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist const& obj) : AWeapon(obj)
{}

PowerFist::~PowerFist(void)
{}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
