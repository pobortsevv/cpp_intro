/*
 * ===================================================================
 *
 *       Filename:  Brain.hpp
 *
 *        Version:  1.0
 *        Created:  04.06.2021 21:59:44
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

class Brain
{
	private:
		std::string _address;

	public:
		std::string  identify(void);
};

#endif
