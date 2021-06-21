/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 18:23:22
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "========== My test ==========" << std::endl;
	double e = 42.21;
	double f = 17.2f;

	::swap( e, f );
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

	double h = 5.11;
	float j = 90.001f;

	std::cout << "h = " << h << ", j = " << j << std::endl;
	std::cout << "min( static_cast<float>(h), j ) = " << ::min( static_cast<float>(h), j ) << std::endl;
	std::cout << "max( h, static_cast<double>(j) ) = " << ::max( h, static_cast<double>(j) ) << std::endl;

	return 0;
}
