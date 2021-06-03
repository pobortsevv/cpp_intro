/*
 * ===================================================================
 *
 *       Filename:  ZombieEvent.cpp
 *
 *        Version:  1.0
 *        Created:  03.06.2021 20:53:29
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string _type)
{
	this->type_choice = _type;
}

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zombie;
	if (!this->name)
		zombie = new Zombie(name, "");
	else
		zombie = new Zombie(name, this->choice_type);
	return (zombie);
}

Zombie	Zombie::randomChump(void)
{
	static const std::string names[10] = { "Oleg", "Vitya", "Eduard", "Victoria",
                          "Vanya", "Ann", "Kirill", "Alex",
                          "Blum", "Kent" };
	int index;
	Zombie rand_zombie;

	srand(time(0));
	index = rand() % 10;
	rand_zombie(names[index], this->type_choice);
	rand_zombie.announce();
	return (rand_Zombie);
}
