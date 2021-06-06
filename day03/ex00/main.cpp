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
#include <unistd.h>

int main(void)
{
	int i = 5;
	FragTrap trap1("Idiot");
	FragTrap trap2;

	while (--i >= 0)
	{
		trap1.vaulthunter_dot_exe("PewDiePie");
		sleep(1);
	}
	trap2.rangedAttack("Maywhether");
	return (0);
}
