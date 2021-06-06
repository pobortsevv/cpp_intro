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

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;
	zombie = new Zombie(name, this->type_choice);
	return (zombie);
}

Zombie	ZombieEvent::randomChump(void)
{
	static const std::string names[10] = { "Oleg", "Vitya", "Eduard", "Victoria",
                          "Vanya", "Ann", "Kirill", "Alex",
                          "Blum", "Kent" };
	int index;

	srand(time(0));
	index = rand() % 10;
	Zombie rand_Zombie(names[index], this->type_choice);
	rand_Zombie.announce();
	return (rand_Zombie);
}
