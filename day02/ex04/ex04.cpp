/*
 * ===================================================================
 *
 *       Filename:  ex04.cpp
 *
 *    Description: Just trying some references in cpp 
 *
 *        Version:  1.0
 *        Created:  04.06.2021 21:13:01
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Pointer output: " << *ptr << std::endl;
	std::cout << std::endl;
	std::cout << "Reference output: " << ref << std::endl;
	return (0);
}

