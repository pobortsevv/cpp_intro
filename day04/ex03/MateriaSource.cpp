/*
 * ===================================================================
 *
 *       Filename:  MateriaSource.cpp
 *
 *        Version:  1.0
 *        Created:  18.06.2021 14:53:56
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _count(0)
{
	for (int i = 0; i < MAX_SOURCE; i++)
		this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_source[i];
	this->_count = obj.getCount();
	if (this->_count != 0)
	{
		for (int i = 0; i < this->_count; i++)
			this->_source[i] = obj.getMateria(i)->clone();
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_source[i] != nullptr)
			delete this->_source[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const & obj)
{
	if (this == &obj)
		return *this;
	for (int i = 0; i < this->_count; i++)
		delete this->_source[i];
	this->_count = obj.getCount();
	if (this->_count != 0)
	{
		for (int i = 0; i < this->_count; i++)
			this->_source[i] = obj.getMateria(i)->clone();
	}
	return *this;
}

int MateriaSource::getCount(void) const
{
	return this->_count;
}

AMateria *MateriaSource::getMateria(int idx) const
{
	if (idx >= 0 && idx <= 3 && idx < this->_count)
		return this->_source[idx];
	return 0;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m == NULL || this->_count == MAX_SOURCE)
		return ;
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_source[i] == m)
		{
			std::cout << m->getType() << " already stored in Materi Source!";
			std::cout << std::endl;
			return ;
		}
	}
	this->_source[this->_count] = m;
	this->_count++;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_source[i]->getType() == type)
			return this->_source[i];
	}
	return 0;
}
