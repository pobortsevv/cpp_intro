/*
 * ===================================================================
 *
 *       Filename:  Character.cpp
 *
 *        Version:  1.0
 *        Created:  18.06.2021 13:52:33
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Character.hpp"

Character::Character(void) : _name("noname"), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name), _count(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const & obj) : _name(obj.getName())
{
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
	this->_count = obj.getCount();
	if (this->_count != 0)
	{
		for (int i = 0; i < this->_count; i++)
			this->_inventory[i] = obj.getMateria(i)->clone();
	}
}

Character::~Character(void)
{}

Character &Character::operator=(Character const & obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
	this->_count = obj.getCount();
	if (this->_count != 0)
	{
		for (int i = 0; i < this->_count; i++)
			this->_inventory[i] = obj.getMateria(i)->clone();
	}
	return *this;
}

std::string const &Character::getName(void) const
{
	return this->_name;
}

int Character::getCount(void) const
{
	return this->_count;
}

AMateria *Character::getMateria(int idx) const
{
	if (idx >= 0 && idx <= 3 && this->_count > idx)
		return this->_inventory[idx];
	else
		return NULL;
}

void Character::equip(AMateria *m)
{
	if (m == NULL || this->_count == FULL_INVENTORY)
		return ;
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << this->_name << " already has this materia in inventory";
			std::cout << std::endl;
			return ;
		}
	}
	this->_inventory[this->_count] = m;
	this->_count++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_count <= idx)
		return ;	
	this->_inventory[idx] = NULL;	
	this->_count--;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->_count > idx)
		this->_inventory[idx]->use(target);
}
