/*
 * ===================================================================
 *
 *       Filename:  SuperMutant.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:13:08
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & obj) : 
	Enemy(obj.getHP(), obj.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	damage = damage > 3 ? damage - 3 : damage;
	Enemy::takeDamage(damage);
}
