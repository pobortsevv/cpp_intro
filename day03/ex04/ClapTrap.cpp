/*
 * ===================================================================
 *
 *       Filename:  ClapTrap.cpp
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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_lvl = 1;
	this->_name = "noname";
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_name << " <ClapTrap> was born!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& obj)
{
	this->_hitPoints = obj._hitPoints;
	this->_maxHitPoints = obj._maxHitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_maxEnergyPoints = obj._maxEnergyPoints;
	this->_lvl = obj._lvl;
	this->_name = obj._name;
	this->_meleeAttackDamage = obj._meleeAttackDamage;
	this->_rangeAttackDamage = obj._rangeAttackDamage;
	this->_armorDamageReduction = obj._armorDamageReduction;
	std::cout << this->_name << " <ClapTrap> was born!" << std::endl;
}

ClapTrap::ClapTrap(std::string const& name) : _name(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_lvl = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << this->_name << " <ClapTrap> was born!" << std::endl;
}

ClapTrap::ClapTrap(std::string const& name, int hitPoints, int maxHitPoints, int energyPoints, int maxEnergyPoints, int lvl,
				 int meleeAttackDamage, int rangeAttackDamage, int armorDamageReduction)
{
	this->_hitPoints = hitPoints;
	this->_maxHitPoints = maxHitPoints;
	this->_energyPoints = energyPoints;
	this->_maxEnergyPoints = maxEnergyPoints;
	this->_lvl = lvl;
	this->_name = name;
	this->_meleeAttackDamage = meleeAttackDamage;
	this->_rangeAttackDamage = rangeAttackDamage;
	this->_armorDamageReduction = armorDamageReduction;
	std::cout << this->_name << " <ClapTrap> was born!" << std::endl;
}

ClapTrap::~ClapTrap(void) 
{
	std::cout << this->_name << " <ClapTrap> died by destructor!" << std::endl;
}

int	ClapTrap::getHP(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getMaxHP(void) const
{
	return (this->_maxHitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getMaxEnergyPoints(void) const
{
	return (this->_maxEnergyPoints);
}

int	ClapTrap::getLvl(void) const
{
	return (this->_lvl);
}

int	ClapTrap::getMelee(void) const
{
	return (this->_meleeAttackDamage);
}

int	ClapTrap::getRange(void) const
{
	return (this->_rangeAttackDamage);
}

int	ClapTrap::getArmor(void) const
{
	return (this->_armorDamageReduction);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & obj)
{
	std::cout << "Assignation operator for ClapTrap called" << std::endl;
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

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << "TR4P: " << this->_name << " attacks ";
	std::cout << target << " at range, causing " << this->_rangeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << "TR4P: " << this->_name << " attacks ";
	std::cout << target << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints - amount <= 0)
	{
		std::cout << this->_name << " died!" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		std::cout << this->_name << " got " << amount << " damage!";
		std::cout << std::endl;
		if (amount - this->_armorDamageReduction > 0)
			this->_hitPoints -= (amount - this->_armorDamageReduction);
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + (int)amount >= this->_maxHitPoints)
	{
		this->_hitPoints = this->_maxHitPoints;
		std::cout << this->_name << " is fully repaired!" << std::endl;
	}
	else
	{
		this->_hitPoints += amount;
		std::cout << this->_name << " got some help and recieved ";
		std::cout << amount << " HP!"<< std::endl;
	}
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}
