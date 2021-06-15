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
#include <unistd.h>

int main(void)
{
	FragTrap frag1("Mario");
	ScavTrap scav2("Serena");
	NinjaTrap ninja("Donatello");
	ClapTrap clap;
	ScavTrap scav3;

	scav3 = scav2;

	ninja.ninjaShoebox(frag1);
	ninja.ninjaShoebox(scav3);
	ninja.ninjaShoebox(clap);

	return (0);
}
