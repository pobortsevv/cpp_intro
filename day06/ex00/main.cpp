/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 10:20:14
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Cast.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong count of arguments" << std::endl;
		return 1;
	}
	try
	{
		std::stof(av[1]);
	}
	catch (std::exception &error)
	{
		std::cout << "Invalid argument" << std::endl;
		return 1;
	}

	Cast caster(av[1]);
	try
	{
		std::cout << "char: ";
		char character = caster.toChar();
		std::cout << "\'" << character << "\'" << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		std::cout << "int: ";
		int integer = caster.toInt();
		std::cout << integer << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		std::cout << "float: ";
		float floating = caster.toFloat();
		std::cout << floating << "f" << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	try
	{
		std::cout << "double: ";
		double double_value = caster.toDouble();
		std::cout << double_value << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	return 0;
}
