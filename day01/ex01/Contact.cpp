/*
 * ===================================================================
 *
 *       Filename:  Contact.cpp
 *
 *    Description:  Methods of Contact class
 *
 *        Version:  1.0
 *        Created:  29.05.2021 20:45:18
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Contact.hpp"

int	Contact::getIndex(void)
{
	return (this->index);
}

void Contact::setIndex(int _index)
{
	this->index = _index;
}

std::string getFirst(void)
{
	return (this->last_name);
}

void setFirst(std::string _first)
{
	this->first_name = _first;
}
