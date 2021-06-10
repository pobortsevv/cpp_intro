/*
 * ===================================================================
 *
 *       Filename:  Brain.cpp
 *
 *        Version:  1.0
 *        Created:  04.06.2021 22:02:34
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Brain.hpp"

std::string Brain::identify(void)
{
	std::stringstream buf;

	buf << this;
	this->_address = buf.str();
	return (this->_address);
}
