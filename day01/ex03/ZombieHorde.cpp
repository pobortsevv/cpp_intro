/*
 * ===================================================================
 *
 *       Filename:  ZombieHorde.cpp
 *
 *    Description: class where we will allocate n - size array
 *    	of Zombies
 *
 *        Version:  1.0
 *        Created:  04.06.2021 13:22:27
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int _n) : n(_n)
{
	static const std::string names[10] = { "Oleg", "Vitya", "Eduard", "Victoria",
                          "Vanya", "Ann", "Kirill", "Alex",
                          "Blum", "Kent" };
	int i = -1;
	int index;

	srand(time(0));
	if (_n <= 0)
	{
		std::cout << "bad amout of zombies" << std::endl;
		std::cout << "Amount now: 1" << std::endl;
		this->n = 1;
	}
	this->zombies = new Zombie[this->n];
	while (++i < this->n)
	{
		index = rand() % 10;
		this->zombies[i].setName(names[index]);
		this->zombies[i].setType("common");
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->zombies;
}

void	ZombieHorde::announce(void) const
{
	int i = -1;

	while (++i < this->n)
		this->zombies[i].announce();
}
