/*
 * ===================================================================
 *
 *       Filename:  RadScorpion.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:13:08
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & obj) : 
	Enemy(obj.getHP(), obj.getType())
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
