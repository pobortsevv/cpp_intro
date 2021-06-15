/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *        Version:  1.0
 *        Created:  15.06.2021 19:15:41
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}
