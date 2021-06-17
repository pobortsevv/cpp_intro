/*
 * ===================================================================
 *
 *       Filename:  Goblin.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 08:46:01
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Goblin.hpp"

Goblin::Goblin(std::string name) :  Victim(name)
{
	std::cout << "I need more coins!" << std::endl;
}

Goblin::Goblin(Goblin const& obj) : Victim(obj.getName())
{
	std::cout << "I need more coins!" << std::endl;
}

Goblin::~Goblin(void)
{
	std::cout << "I'm dying in a poor..." << std::endl;
}

Goblin & Goblin::operator=(Goblin const& obj)
{
	if (this == &obj)
		return *this;
	this->_name = obj.getName();
	return *this;
}

void Goblin::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a wonderful unicorn!" << std::endl;
}
