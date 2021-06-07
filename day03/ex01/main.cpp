/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  06.06.2021 23:03:14
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main(void)
{
	int i = 5;
	FragTrap frag1("Mario");
	ScavTrap scav2("Serena");

	while (--i >= 0)
	{
		frag1.vaulthunter_dot_exe("PewDiePie");
		sleep(1);
	}
	i = 5;
	while (--i >= 0)
	{
		scav2.challengeNewcomer("Paul");
		sleep(1);
	}
	scav2.rangedAttack("Steve");
	return (0);
}
