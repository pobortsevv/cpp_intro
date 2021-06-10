/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *        Version:  1.0
 *        Created:  03.06.2021 00:07:47
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Pony.hpp"

void ponyOnTheStack(void)
{
	Pony pony("Sparkle", "purple");
	
	pony.ponyTalk("This is your dream! Anything you can do in your dreams, you can do now! Do Princesses Dream of Magic STACK?");
}

void ponyOnTheHeap(void)
{
	Pony *pony = new Pony("Applejack", "orange");

	pony->ponyTalk("Alrighty, ponies! Ready to have some fun? We have many HEAPS of deals");
	delete(pony);
}

int main(void)
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return (0);
}
