/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  05.06.2021 14:03:48
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon        club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	/*-----------------------------------------------------------------------------
	 * At HumanA I used reference of Weapon class as variable of class and 
	 * we are using initialization of weapon in constactor
	 * But in HumanB I have to set a weapon after initializaion of whole 
	 * humanB object. We CANNOT give a reference a NULL as we can do it for pointer
	 * that I used in HumanB class
	 *-----------------------------------------------------------------------------*/
	{
		Weapon        club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
