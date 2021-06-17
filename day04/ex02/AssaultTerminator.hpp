/*
 * ===================================================================
 *
 *       Filename:  AssaultTerminator.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 16:59:21
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class  AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & obj);
		virtual ~AssaultTerminator();

		ISpaceMarine *clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;
};

#endif

