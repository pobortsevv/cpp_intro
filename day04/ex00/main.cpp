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
#include "Goblin.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Goblin tony("Tony");

	std::cout << robert << jim << joe << tony;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tony);

	return 0;
}
