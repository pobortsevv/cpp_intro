/*
 * ===================================================================
 *
 *       Filename:  AMateria.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 19:05:17
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("unknown"), _xp(0)
{}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{}

AMateria::AMateria(AMateria const & obj) : _type(obj.getType()), _xp(obj.getXP())
{}

AMateria::~AMateria(void)
{}

AMateria &AMateria::operator=(AMateria const & obj)
{
	if (this == &obj)
		return *this;
	this->_type = obj.getType();
	this->_xp = obj.getXP();

	return *this;
} 

std::string const & AMateria::getType(void) const
{
	return this->_type;
}

int AMateria::getXP(void) const
{
	return this->_xp;
}

void	AMateria::use(ICharacter & target)
{
	std::cout << target.getName() << " used unknown materia!" << std::endl;
}
