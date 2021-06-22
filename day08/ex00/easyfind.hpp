/*
 * ===================================================================
 *
 *       Filename:  easyfind.hpp
 *
 *        Version:  1.0
 *        Created:  06/22/2021 14:29:03
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

class NotFound : public std::exception
{
	const char *what(void) const throw()
	{
		return "Element not found!";
	}
};

template<typename T>
typename T::iterator easyfind(T & obj, int el)
{
	typename T::iterator position;

	position = std::find(obj.begin(), obj.end(), el);
	if (position == obj.end())
		throw NotFound();
	return position;
}

#endif

