/*
 * ===================================================================
 *
 *       Filename:  Zombie.cpp
 *
 *    Description: Some methods for Zombie class 
 *
 *        Version:  1.0
 *        Created:  03.06.2021 20:06:29
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Zombie.hpp"

Zombie::Zombie(std::string _name, std::string _type) : name(_name), type(_type)
{
	std::cout << this->name << " was born\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died\n";
}

void	Zombie::setZombieType(std::string _type)
{
	this->type = _type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss...\n";
}
