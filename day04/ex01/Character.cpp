/*
 * ===================================================================
 *
 *       Filename:  Character.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 11:13:14
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Character.hpp"

Character::Character(void) : _name("noname"), _ap(MAX_AP), _weapon(NULL)
{}

Character::Character(std::string const & name) : _name(name), _ap(MAX_AP), _weapon(NULL)
{}

Character::Character(Character const & obj) : _name(obj.getName()), _ap(MAX_AP),
	_weapon(NULL)
{}

Character::~Character(void)
{}

std::string const & Character::getName(void) const
{
	return this->_name;
}

int Character::getAP(void) const
{
	return this->_ap;
}

AWeapon *Character::getWeapon(void) const
{
	return this->_weapon;
}

Character & Character::operator=(Character const & obj)
{
	if (this == &obj)
		return *this;
	this->_name = obj.getName();
	this->_ap = obj.getAP();
	this->_weapon = obj.getWeapon();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Character const& obj)
{
	if (obj.getWeapon() != NULL)
	{
		o << obj.getName() << " has " << obj.getAP();
		o << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	}
	else
		o << obj.getName() << " has " << obj.getAP() << " AP and is unarmed\n";
	return o;
}

void Character::recoverAP(void)
{
	this->_ap = this->_ap + REC_AP > MAX_AP ? MAX_AP : this->_ap + REC_AP;
}

void Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (enemy == NULL)
		return;
	if (this->_weapon == NULL)
	{
		std::cout << this->_name << " has no weapon to attack ";
		std::cout << enemy->getType() << std::endl;
		return;
	}
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << this->_name << " hasn't enough action points to attack ";
		std::cout << enemy->getType() << " by " << this->_weapon->getName() << std::endl;
		return;
	}
	else
	{
		std::cout << this->_name << " attacks " << enemy->getType();
		std::cout << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		this->_ap -= this->_weapon->getAPCost();
		if (enemy->getHP() - this->_weapon->getDamage() <= 0)
		{
			delete enemy;
			enemy = NULL;
		}
		else
			enemy->takeDamage(this->_weapon->getDamage());
	}
	return ;
}
