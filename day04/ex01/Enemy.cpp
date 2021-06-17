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

Enemy::Enemy(void) : _hp(100), _type("default")
{}

Enemy::Enemy(int hp, std::string const& type) : 
	_hp(hp), _type(type)
{}

Enemy::Enemy(Enemy const & obj) : _hp(obj.getHP()),
	_type(obj.getType())
{}

Enemy::~Enemy(void)
{}

Enemy & Enemy::operator=(Enemy const& obj)
{
	if (this == &obj)
		return *this;
	this->_type = obj.getType();
	this->_hp = obj.getHP();

	return *this;
}

std::string const & Enemy::getType(void) const
{
	return this->_type;
}

int Enemy::getHP(void) const
{
	return this->_hp;
}

void	Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->_hp = this->_hp - damage >= 0 ? this->_hp - damage : 0;
}
