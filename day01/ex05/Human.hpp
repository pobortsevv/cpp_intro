/*
 * ===================================================================
 *
 *       Filename:  Human.hpp
 *
 *        Version:  1.0
 *        Created:  04.06.2021 21:59:44
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	private:
		Brain _brain;

	public:
		Brain & getBrain(void);
		std::string identify(void);
};

#endif
