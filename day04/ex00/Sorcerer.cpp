/*
 * ===================================================================
 *
 *       Filename:  Sorcerer.cpp
 *
 *        Version:  1.0
 *        Created:  15.06.2021 17:51:22
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const& obj)
{
	this->_name = obj.getName();
	this->_title = obj.getTitle();
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName(void) const
{
	return this->_name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

Sorcerer & Sorcerer::operator=(Sorcerer const& obj)
{
	if (this == &obj)
		return *this;
	this->_name = obj.getName();	
	this->_title = obj.getTitle();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const& obj)
{
	o << "I am " << obj.getName() << ", " << obj.getTitle();
	o << ", and I like ponies!" << std::endl;
	return o;
}

void	Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}
