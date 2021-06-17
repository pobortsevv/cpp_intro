/*
 * ===================================================================
 *
 *       Filename:  Peon.cpp
 *
 *        Version:  1.0
 *        Created:  15.06.2021 18:53:53
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Peon.hpp"

Peon::Peon(std::string name) :  Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const& obj) : Victim(obj.getName())
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const& obj)
{
	if (this == &obj)
		return *this;
	this->_name = obj.getName();	
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
