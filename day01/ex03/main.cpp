/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: Just dynamic allocations inside of class
 *    	destructor delete array of objects in class
 *
 *        Version:  1.0
 *        Created:  04.06.2021 20:33:58
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde horde_stack(4);
	ZombieHorde *horde_heap;

	std::cout << "Zombies on stack" << std::endl;
	horde_stack.announce();

	std::cout << std::endl;
	std::cout << "Zombies on heap with undef amount of zombies: -1" << std::endl;
	horde_heap = new ZombieHorde(-1);
	horde_heap->announce();
	delete(horde_heap);

	std::cout << std::endl;
	std::cout << "Zombies on heap with a normal (5) amount of zombies" << std::endl;
	horde_heap = new ZombieHorde(5);
	horde_heap->announce();
	delete(horde_heap);

	return (0);
}
