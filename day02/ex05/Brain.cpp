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
	std::string address;
	char buff[32];

	std::sprintf(buff, "%p", this);
	address = buff;
	return (address);
}
