/*
 * ===================================================================
 *
 *       Filename:  Squad.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 15:59:41
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"
# include <iostream>
# include <string>

class Squad : public ISquad
{
	private:
		ISpaceMarine **_squad;
		int _count;
	
	public:
		Squad(void);
		Squad(Squad const &obj);
		virtual ~Squad(void);

		int getCount(void) const;
		ISpaceMarine *getUnit(int index) const;
		Squad & operator=(Squad const & obj);

		int push(ISpaceMarine *unit);
};

#endif

