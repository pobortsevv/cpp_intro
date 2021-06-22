/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  23.06.2021 02:13:36
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "mutantstack.hpp"

int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); 
	mstack.push(5); 
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it; 
	}

	std::stack<int> s(mstack);
	
	MutantStack<int> mystack;
	mystack.push(21);
	mystack.push(42);
	mystack.push(2021);
	mystack.push(96);
	mystack.push(2002);


	MutantStack<int>::iterator myit = mystack.begin(); 
	MutantStack<int>::reverse_iterator myite = mystack.rbegin();

	std::cout << "My stack from begin:\n" << std::endl;
	while (myit != mystack.end())
	{
		std::cout << *myit << " ";
		++myit; 
	}

	std::cout << std::endl;
	std::cout << "\nMy stack from end:\n" << std::endl;
	while (myite != mystack.rend())
	{
		std::cout << *myite << " ";
		++myite; 
	}
	std::cout << std::endl;
	return 0;
}

