/*
 * ===================================================================
 *
 *       Filename:  TacticalMarine.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 16:59:21
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class  TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & obj);
		virtual ~TacticalMarine();

		ISpaceMarine *clone(void) const;
		void battleCry(void) const;
		void rangedAttack(void) const;
		void meleeAttack(void) const;
};

#endif

