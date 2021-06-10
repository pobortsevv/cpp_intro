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

FragTrap::FragTrap(void)
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
	std::cout << this->_name << " <FragTrap> was born!" << std::endl;
}

FragTrap::FragTrap(std::string const& name) : _name(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
	this->_lvl = 1;
	this->_meleeAttackDamage = 30;
	this->_rangeAttackDamage = 20;
	this->_armorDamageReduction = 5;
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
    this->_maxEnergyPoints = obj._maxEnergyPoints;
	this->_lvl = obj._lvl;
	this->_name = obj._name;
	this->_meleeAttackDamage = obj._meleeAttackDamage;
	this->_rangeAttackDamage = obj._rangeAttackDamage;
	this->_armorDamageReduction = obj._armorDamageReduction;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP: " << this->_name << " attacks ";
	std::cout << target << " at range, causing " << this->_rangeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP: " << this->_name << " attacks ";
	std::cout << target << " at melee, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::doFlip(std::string const & target)
{
	std::cout << this->_name << " did a triple flip in front of ";
	std::cout << target << ". Wow that's was amazing!" << std::endl;
}

void	FragTrap::makeMacaroni(std::string const & target)
{
	std::cout << this->_name << " made and served macaroni with the chicken strips for ";
	std::cout << target << ". Mmmm so good and tasty!" << std::endl;
}

typedef void (FragTrap::*arrFunc)(std::string const & target);

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
