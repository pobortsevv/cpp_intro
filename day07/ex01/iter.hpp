/*
 * ===================================================================
 *
 *       Filename:  iter.hpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 18:56:46
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void iter(T *arr, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template<typename T>
void print_array_element(T & el)
{
	std::cout << el << std::endl;
}

#endif

