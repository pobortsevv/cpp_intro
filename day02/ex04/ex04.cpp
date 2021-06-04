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
	std::string const str = "HI THIS IS BRAIN";

	/*-----------------------------------------------------------------------------
	 * the most simple explanation of reference: Reference is an alias for another 
	 * variable or constant
	 *-----------------------------------------------------------------------------*/
	std::string const *ptr = &str;
	std::string const &ref = str;

	std::cout << "Pointer output: " << *ptr << std::endl;
	std::cout << std::endl;
	std::cout << "Reference output: " << ref << std::endl;
	return (0);
}

