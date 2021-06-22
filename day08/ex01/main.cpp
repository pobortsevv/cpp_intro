/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/22/2021 18:01:48
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "span.hpp"

int main(void)
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "========= My tests =========" << std::endl;
	Span sp1(10000);
	std::vector<int> random_numbers;

	srand(time(nullptr));
	for (int i = 0; i < 10000; i++)
	{
		random_numbers.push_back(rand() % 10000);
	}
	sp1.addNumber(random_numbers.begin(), random_numbers.end());
	/* for (int i =0; i < 1000; i++) */
	/* { */
	/* 	std::cout << sp1[i] << "  "; */
	/* 	if (i == 20) */
	/* 		std::cout << std::endl; */
	/* } */

	std::cout << "Created 10000-n span object with better addNumber\n" << std::endl;
	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	try
	{
		std::cout << "Trying to add new 1001st element:" << std::endl;
		sp1.addNumber(666);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		std::cout << "Trying to take -1 element from Span:" << std::endl;
		sp1[-1];
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
