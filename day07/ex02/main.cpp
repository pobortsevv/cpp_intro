/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 22:53:25
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Array.hpp"

int main(void)
{
	Array<int> arr1;
	Array<int> arr2(5);

	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		std::cout << arr2[i] << " -> ";
		arr2[i] = i;
		std::cout << arr2[i] << std::endl;
	}

	arr1 = arr2;
	std::cout << "\narr1 = arr2\n" << std::endl;


	std::cout << "arr1 changing:" << std::endl;
	for (unsigned int i = 0; i < arr1.size(); i++)
	{
		std::cout << arr1[i] << " -> ";
		arr1[i] *= 10;
		std::cout << arr1[i] << std::endl;
	}

	std::cout << "arr2 changing:" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); i++)
	{
		std::cout << arr2[i] << " -> ";
		arr2[i] *= 5;
		std::cout << arr2[i] << std::endl;
	}
	try
	{
		std::cout << "Trying to get out of limit of arr1" << std::endl;
		std::cout << arr1[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	Array<std::string> str_arr(3);
	str_arr[0] = "capibara";
	str_arr[1] = "alpaca";
	str_arr[2] = "salamandra";

	std::cout << "\nCreated string Array!\n" << std::endl;
	for (unsigned int i = 0; i < str_arr.size(); i++)
	{
		std::cout << i + 1 << ": " << str_arr[i] << std::endl;
	}
	return 0;

}

