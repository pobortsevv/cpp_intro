/*
 * ===================================================================
 *
 *       Filename:  FragTrap.cpp
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

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("noname", 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << this->_name << " <FragTrap> was born!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << this->_name << " <FragTrap> was born!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " <FragTrap> died by destructor!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
	std::cout << "Assignation operator for FragTrap called" << std::endl;
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

void	FragTrap::doFlip(std::string const & target) const
{
	std::cout << this->_name << " did a triple flip in front of ";
	std::cout << target << ". Wow that's was amazing!" << std::endl;
}

void	FragTrap::makeMacaroni(std::string const & target) const
{
	std::cout << this->_name << " made and served macaroni with the chicken strips for ";
	std::cout << target << ". Mmmm so good and tasty!" << std::endl;
}

typedef void (FragTrap::*arrFunc)(std::string const & target) const;

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints < 25)
		std::cout << this->_name << " doesn't have enough energy points to execute vaulthunter :(" << std::endl;
	else
	{
		arrFunc funcs[4] = {
			&FragTrap::rangedAttack, &FragTrap::meleeAttack,
			&FragTrap::doFlip, &FragTrap::makeMacaroni
		};

		std::srand(std::time(nullptr));
		(this->*funcs[std::rand() % 4])(target);
		this->_energyPoints -= 25;
	}
}
