/*
 * ===================================================================
 *
 *       Filename:  ISpaceMarine.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 15:57:30
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};

#endif

