/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: We need to create some different zombies with
 *    	a specific name and type and random name and specific type 
 *    	with ZombieEvent method
 *
 *        Version:  1.0
 *        Created:  04.06.2021 09:59:06
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie *brain_eater = new Zombie("Timophey", "Brain Eater");
	Zombie feet_enjoyer("Rostislav", "Feet Enjoyer");
	ZombieEvent event;
	Zombie *boss;

	std::cout << "Zombie on heap created\nAHH he is eating my brain!!!\n\n";
	brain_eater->announce();
	std::cout << "\nAnother scientist made a zombie on a stack\n" << std::endl;
	feet_enjoyer.announce();
	std::cout <<"It ate his right foot...\n\n";
	std::cout << "Oh no, they broke out of the lab!!!\n\n";
	event.setZombieType("MAIN BOSS");
	boss = event.newZombie("DANIL");	
	boss->announce();
	event.setZombieType("Heart Fan");
	event.randomChump();
	delete(brain_eater);
	delete(boss);
	return (0);
}
