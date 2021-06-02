/*
 * ===================================================================
 *
 *       Filename:  Pony.cpp
 *
 *    Description: Methods for Pony class 
 *
 *        Version:  1.0
 *        Created:  02.06.2021 23:59:01
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Pony.hpp"

/*-----------------------------------------------------------------------------
 * That's how constructor looks like:
 * We initialize our object giving it name, color and horn style as arguments
 *-----------------------------------------------------------------------------*/

Pony::Pony(std::string _name, std::string _color) : name(_name), color(_color)
{
	std::cout << "Constractor of " << _name << " has called\n";
}

Pony::~Pony(void)
{
	std::cout << "Destructor of " << this->name << " has called\n";
	return;
}

void Pony::ponyTalk(std::string phrase) const
{
	std::cout << "Hi! My name is " << this->name << std::endl;
	std::cout << "I was born as " << this->color << " pony" << std::endl;
	std::cout << "\nMy cathphrase: " << std::endl;
	std::cout << phrase << std::endl;
}
