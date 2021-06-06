/*
 * ===================================================================
 *
 *       Filename:  ex01.cpp
 *
 *    Description: Plumbing problem 
 *
 *        Version:  1.0
 *        Created:  03.06.2021 19:44:30
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include <iostream>

void memoryLeak()
{
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete(panther);
}

int main(void)
{
	memoryLeak();
	return (0);
}
