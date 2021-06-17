/*
 * ===================================================================
 *
 *       Filename:  Squad.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 16:08:43
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Squad.hpp"

Squad::Squad(void) : _squad(NULL), _count(0)
{}

Squad::Squad(Squad const & obj)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_squad[i];
	delete[] this->_squad;
	this->_squad = NULL;
	this->_count = obj.getCount();
	if (this->_count != 0)
	{
		this->_squad = new ISpaceMarine *[this->_count];
		for (int i = 0; i < this->_count; i++)
			this->_squad[i] = obj.getUnit(i)->clone();
	}
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_squad[i];
	delete[] this->_squad;
	this->_squad = NULL;
}

Squad & Squad::operator=(Squad const & obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < this->_count; i++)
		delete this->_squad[i];
	delete[] _squad;
	_squad = NULL;
	this->_count = obj.getCount();
	if (this->_count != 0)
	{
		this->_squad = new ISpaceMarine *[this->_count];
		for (int i = 0; i < this->_count; i++)
			this->_squad[i] = obj.getUnit(i)->clone();
	}
	return *this;
}

int Squad::getCount(void) const
{
	return this->_count;
}

ISpaceMarine	*Squad::getUnit(int index) const
{
	return this->_squad[index];
}

int	Squad::push(ISpaceMarine *unit)
{
	if (unit == NULL)
		return this->_count;
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_squad[i] == unit)
			return this->_count;
	}
	ISpaceMarine **tmp = this->_squad;
	this->_squad = new ISpaceMarine *[this->_count + 1];
	int i = 0;
	for (; i < this->_count; i++)
		this->_squad[i] = tmp[i];
	delete[] tmp;
	this->_squad[i] = unit;
	this->_count++;

	return this->_count;
}
