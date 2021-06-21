/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 15:27:33
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */


#include <iostream>

class Base
{
	public:
		virtual ~Base(void) {};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base *generate(void)
{
	srand(time(nullptr));
	char arr[3] = { 'A', 'B', 'C'};
	int n = rand() % 3;

	std::cout << "Generated " << arr[n] << " class" << std::endl;
		
	if (n == 0)
		return new A;
	else if (n == 1)
		return new B;
	else
		return new C;
}

void identify_from_pointer(Base * p)
{
	A *a_ptr;
	B *b_ptr;
	C *c_ptr;
	
	std::cout << "\nIdentification from pointer:" << std::endl;

	if ((a_ptr = dynamic_cast<A *>(p)))
		std::cout << "This is A class" << std::endl;
	else if ((b_ptr = dynamic_cast<B *>(p)))
		std::cout << "This is B class" << std::endl;
	else if ((c_ptr = dynamic_cast<C *>(p)))
		std::cout << "This is C class" << std::endl;
}

void identify_from_reference( Base & p)
{
	
	std::cout << "\nIdentification from reference:" << std::endl;

	if (dynamic_cast<A *>(&p))
		std::cout << "This is A class" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "This is B class" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "This is C class" << std::endl;
	
}

int main(void)
{
	Base *tmp = generate();
	identify_from_pointer(tmp);
	identify_from_reference(*tmp);
	return 0;
}
