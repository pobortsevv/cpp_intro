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
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <unistd.h>

int main(void)
{
	SuperTrap super1("Shreder");

	super1.meleeAttack("Raphael");
	super1.rangedAttack("Leonardo");
	super1.vaulthunter_dot_exe("Splinter");
	return (0);
}
