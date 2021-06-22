/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  06/22/2021 14:54:32
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vect;
	vect.push_back(4);
	vect.push_back(8);
	vect.push_back(-3);
	vect.push_back(3);
	vect.push_back(-8);
	vect.push_back(12);
	vect.push_back(5);

	std::vector<int>::const_iterator iter;

	std::cout << "Our vector:" << std::endl;
	for (unsigned int i = 0; i < vect.size(); i++)
	{
		std::cout << i << ": " << vect[i] << std::endl;
	}
	
	try
	{
		std::cout << "Trying to find -8 in vector" << std::endl;
		iter = easyfind(vect, -8);
		std::cout << *iter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Trying to find 42 in vector" << std::endl;
		iter = easyfind(vect, 42);
		std::cout << *iter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
