/*
 * ===================================================================
 *
 *       Filename:  whatever.hpp
 *
 *        Version:  1.0
 *        Created:  21.06.2021 17:32:29
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
T const & max(T const & x, T const & y)
{
	return x > y ? x : y;
}

template<typename T>
T const & min(T const & x, T const & y)
{
	return x < y ? x : y;
}

template<typename T>
void swap(T & x, T & y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

#endif

