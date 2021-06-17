/*
 * ===================================================================
 *
 *       Filename:  Victim.cpp
 *
 *        Version:  1.0
 *        Created:  15.06.2021 18:53:53
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Victim.hpp"

Victim::Victim(std::string name) :  _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const& obj)
{
	this->_name = obj.getName();
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName(void) const
{
	return this->_name;
}

Victim & Victim::operator=(Victim const& obj)
{
	if (this == &obj)
		return *this;
	this->_name = obj.getName();	
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const& obj)
{
	o << "I am " << obj.getName() << ", and I like otters!" << std::endl;
	return o;
}

void Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}
