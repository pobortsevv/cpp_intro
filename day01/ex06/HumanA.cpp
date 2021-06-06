/*
 * ===================================================================
 *
 *       Filename:  HumanA.cpp
 *
 *        Version:  1.0
 *        Created:  05.06.2021 13:56:30
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA(void)
{

}

void HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
