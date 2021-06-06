/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  04.06.2021 22:50:05
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Human.hpp"
#include "Brain.hpp"

int main() 
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
