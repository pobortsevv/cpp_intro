/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 19:02:22
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "iter.hpp"

int main(void)
{
	std::cout << "========== Tests ==========" << std::endl;
	int arr1[] = { 1, 3, 4, 2, 90, 21, 42 };
	char arr2[] = { 'S', 'C', 'o', 'o', 'L', '2', '1' };
	std::string arr3[] = { "alpaca", "honey_banger", "capibara", "salamander" };

	std::cout << std::endl;
	std::cout << "iter(int[])" << std::endl;
	::iter(arr1, 7, print_array_element);
	std::cout << std::endl;
	std::cout << "iter(char[])" << std::endl;
	::iter(arr2, 7, print_array_element);
	std::cout << std::endl;
	std::cout << "iter(string[])" << std::endl;
	::iter(arr3, 4, print_array_element);
}

