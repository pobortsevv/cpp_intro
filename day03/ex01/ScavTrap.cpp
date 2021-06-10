/*
 * ===================================================================
 *
 *       Filename:  ScavTrap.cpp
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

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
	this->_lvl = 1;
	this->_name = "noname";
	this->_meleeAttackDamage = 20;
	this->_rangeAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << this->_name << " <ScavTrap> was born!" << std::endl;
}

ScavTrap::ScavTrap(std::string const& name) : _name(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
	this->_lvl = 1;
	this->_meleeAttackDamage = 20;
	this->_rangeAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_armorDamageReduction = 5;
	std::cout << this->_name << " <ScavTrap> was born!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " <ScavTrap> died by destructor!" << std::endl;
}


ScavTrap & ScavTrap::operator=(ScavTrap const & obj)
{
	std::cout << "Assignation operator for ScavTrap called" << std::endl;
	this->_hitPoints = obj._hitPoints;
	this->_maxHitPoints = obj._maxHitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_lvl = obj._lvl;
	this->_name = obj._name;
	this->_meleeAttackDamage = obj._meleeAttackDamage;
	this->_rangeAttackDamage = obj._rangeAttackDamage;
	this->_armorDamageReduction = obj._armorDamageReduction;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP: " << this->_name << " attacks ";
	std::cout << target << " at range, causing " << this->_rangeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP: " << this->_name << " attacks ";
	std::cout << target << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + amount >= this->_maxHitPoints)
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

void	ScavTrap::writePoem(std::string const & target)
{
	std::cout << this->_name << " wrote a poem for ";
	std::cout << target << ". Man, that was fantastic!" << std::endl;
}

void	ScavTrap::talkDirt(std::string const & target)
{
	std::cout << this->_name << " just screamed at ";
	std::cout << target << " with dirty words! OMG thats awful" << std::endl;
}

typedef void (ScavTrap::*arrFunc)(std::string const & target);

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_energyPoints < 25)
		std::cout << this->_name << " doesn't have enough energy points to execute challengeNewcomer :(" << std::endl;
	else
	{
		arrFunc funcs[4] = {
			&ScavTrap::rangedAttack, &ScavTrap::meleeAttack,
			&ScavTrap::writePoem, &ScavTrap::talkDirt
		};

		std::srand(std::time(nullptr));
		(this->*funcs[std::rand() % 4])(target);
		this->_energyPoints -= 25;
	}
}
