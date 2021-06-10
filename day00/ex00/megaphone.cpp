/*
 * =====================================================================================
 *
 *       Filename:  megaphone.cpp
 *
 *    Description: first program in c++ 
 *
 *        Version:  1.0
 *        Created:  28.05.2021 20:12:48
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * =====================================================================================
 */

#include <iostream>

/*-----------------------------------------------------------------------------
 * Best prectice is not to use "using namespace std" cause namespaces were introduced
 * into C++ to resolve identifier name conflicts. So we will use :: operator
 *-----------------------------------------------------------------------------*/

int main(int ac, char **av)
{
	int i = 1;
	int j;

	if (ac > 1)
	{
		while (i < ac)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				/*-----------------------------------------------------------------------------
				 * We stream ascii symbol using toupper to standart out 
				 *-----------------------------------------------------------------------------*/
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	/*-----------------------------------------------------------------------------
	 * Add \n in standart out 
	 *-----------------------------------------------------------------------------*/
	std::cout << std::endl;
	return (0);
}
