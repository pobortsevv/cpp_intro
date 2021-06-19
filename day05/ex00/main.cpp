/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  19.06.2021 23:49:41
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Bureaucrat.hpp"


int main(void)
{
	Bureaucrat bob("Bob", 150);
	Bureaucrat john("John", 1);

	try
	{
		std::cout << bob << john;
		Bureaucrat kent("Kent", -5);
		Bureaucrat max("Max", 10);
		std::cout << max;
		std::cout << kent;
	}
	catch (std::exception &e)
	{
		std::cout << "Error at inizialization stage: " << e.what() << std::endl;
	}

	std::cout << "Kent and Max didn't created!" << std::endl;

	try
	{
		bob.decGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Error with decremention of bob grade: " << e.what() << std::endl;
	}

	std::cout << "Bob's grade stayed " << bob.getGrade() << std::endl;	

	try
	{
		john.incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Error with incremention of john grade: " << e.what() << std::endl;
	}

	std::cout << "John's grade stayed " << john.getGrade() << std::endl;	

	Bureaucrat tom("Tom", 15);
	Bureaucrat ivan("Ivan", 130);
	
	std::cout << tom << ivan;

	try
	{
		for (int i = 0; i < 50; i++)
		{
			tom.incGrade();
			ivan.decGrade();
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << tom << ivan;
	return 0;
}
