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

ScavTrap::ScavTrap(void) : ClapTrap("noname", 100, 100, 50, 1, 20, 15, 3)
{
	std::cout << this->_name << " <ScavTrap> was born!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 1, 20, 15, 3)
{
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
