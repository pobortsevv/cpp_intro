/*
 * ===================================================================
 *
 *       Filename:  NinjaTrap.cpp
 *
 *    Description: methods of parent class 
 *
 *        Version:  1.0
 *        Created:  06.06.2021 21:45:50
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("noname", 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << this->_name << " <NinjaTrap> was born!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& obj) : ClapTrap(obj)
{
	std::cout << this->_name << " <NinjaTrap> was born!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const& name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << this->_name << " <NinjaTrap> was born!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->_name << " <NinjaTrap> died by destructor!" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & obj)
{
	std::cout << "Assignation operator for NinjaTrap called" << std::endl;
	this->_hitPoints = obj._hitPoints;
	this->_maxHitPoints = obj._maxHitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_maxEnergyPoints = obj._maxEnergyPoints;
	this->_lvl = obj._lvl;
	this->_name = obj._name;
	this->_meleeAttackDamage = obj._meleeAttackDamage;
	this->_rangeAttackDamage = obj._rangeAttackDamage;
	this->_armorDamageReduction = obj._armorDamageReduction;
	return (*this);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << "First, " << clap.getName() << " was a clap, then he became frag" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "ninja " << this->_name << " just wanted some Italian food and frag did:" << std::endl;
	frag.vaulthunter_dot_exe(this->_name);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << "wow ninja " << this->_name << " saw how:" << std::endl;
	scav.rangedAttack("Splinter");
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << "Hurray, this ninja finally make Shreder hurt " << std::endl;
	ninja.meleeAttack("Shreder");
}
