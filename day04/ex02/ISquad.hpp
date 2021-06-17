/*
 * ===================================================================
 *
 *       Filename:  ISquad.hpp
 *
 *    Description:  My fist interface
 *
 *        Version:  1.0
 *        Created:  06/17/2021 15:54:38
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif

