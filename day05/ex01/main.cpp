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
#include "Form.hpp"

int main(void)
{
	Bureaucrat tom("Tom", 150);
	Bureaucrat john("John", 1);
	Form st_rule("Stupid Rule", 75, 50);

	std::cout << tom << john;

	tom.signForm(st_rule);

	std::cout << st_rule;	
	john.signForm(st_rule);

	Form clean_code("Clean Code", 10, 20);
	try
	{
		Form not_clean_code("NCC", -1, 160);
		std::cout << not_clean_code;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	Bureaucrat *bobby = new Bureaucrat("bobby", 9);
	try 
	{
		Bureaucrat *not_bobby = new Bureaucrat("Not Bobby", 200);
		std::cout << *bobby << *not_bobby;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << clean_code << *bobby;
	clean_code.beSigned(*bobby);
	std::cout << clean_code;
	delete bobby;

	return 0;
}
