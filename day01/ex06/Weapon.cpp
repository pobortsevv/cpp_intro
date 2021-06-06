/*
 * ===================================================================
 *
 *       Filename:  Weapon.cpp
 *
 *        Version:  1.0
 *        Created:  05.06.2021 13:48:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{

}

std::string const & Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
