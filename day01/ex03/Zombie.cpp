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

Zombie::Zombie(void)
{
	this->name = "";
	this->type = "";
}

Zombie::Zombie(std::string _name, std::string _type) : name(_name), type(_type)
{
	std::cout << this->name << " was born\n";
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died\n";
}

void	Zombie::setName(std::string _name)
{
	this->name = _name;
}

void	Zombie::setType(std::string _type)
{
	this->type = _type;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss...\n";
}
