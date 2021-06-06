/*
 * ===================================================================
 *
 *       Filename:  Human.cpp
 *
 *        Version:  1.0
 *        Created:  04.06.2021 22:18:54
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Human.hpp"

Brain Human::getBrain(void)
{
	return (this->_brain);
}

std::string Human::identify(void)
{
	return (this->_brain.identify());
}
