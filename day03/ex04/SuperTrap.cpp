/*
 * ===================================================================
 *
 *       Filename:  SuperTrap.cpp
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

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : ClapTrap("noname"), FragTrap(), NinjaTrap()
{
	this->_hitPoints = this->FragTrap::getHP();
	this->_maxHitPoints = this->FragTrap::getMaxHP();
	this->_energyPoints = this->NinjaTrap::getEnergyPoints();
	this->_maxEnergyPoints = this->NinjaTrap::getMaxEnergyPoints();
	this->_lvl = this->NinjaTrap::getLvl();
	this->_meleeAttackDamage = this->NinjaTrap::getMelee();
	this->_rangeAttackDamage = this->FragTrap::getRange();
	this->_armorDamageReduction = this->FragTrap::getArmor();
	std::cout << this->_name << " <SuperTrap> was born!" << std::endl;
}

SuperTrap::SuperTrap(std::string const& name) : ClapTrap(name), FragTrap(), NinjaTrap()
{
	this->_hitPoints = this->FragTrap::getHP();
	this->_maxHitPoints = this->FragTrap::getMaxHP();
	this->_energyPoints = this->NinjaTrap::getEnergyPoints();
	this->_maxEnergyPoints = this->NinjaTrap::getMaxEnergyPoints();
	this->_lvl = this->NinjaTrap::getLvl();
	this->_meleeAttackDamage = this->NinjaTrap::getMelee();
	this->_rangeAttackDamage = this->FragTrap::getRange();
	this->_armorDamageReduction = this->FragTrap::getArmor();
	std::cout << this->_name << " <SuperTrap> was born!" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << this->_name << " <SuperTrap> died by destructor!" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & obj)
{
	std::cout << "Assignation operator for SuperTrap called" << std::endl;
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

void	SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::rangedAttack(target);
}
