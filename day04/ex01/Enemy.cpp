/*
 * ===================================================================
 *
 *       Filename:  Enemy.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:49:53
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Enemy.hpp"

AWeapon::AWeapon(void) : _name("deafult"), _apcost(0), _damage(0)
{}

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : 
	_name(name), _apcost(apcost), _damage(damage)
{}

AWeapon::AWeapon(AWeapon const & obj) : _name(obj.getName()),
	_apcost(obj.getAPCost()), _damage(obj.getDamage())
{}

AWeapon::~AWeapon(void)
{}

AWeapon & AWeapon::operator=(AWeapon const& obj)
{
	if (this == &obj)
		return *this;
	this->_name = obj.getName();
	this->_apcost = obj.getAPCost();
	this->_damage = obj.getDamage();
	return *this;
}
