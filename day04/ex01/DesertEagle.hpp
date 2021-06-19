/*
 * ===================================================================
 *
 *       Filename:  DesertEagle.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:28:40
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef DESERTEAGLE_HPP
# define DESERTEAGLE_HPP

# include "AWeapon.hpp"

class DesertEagle : public AWeapon
{
	public:
		DesertEagle(void);
		DesertEagle(DesertEagle const & obj);
		virtual ~DesertEagle(void);

		void attack(void) const;
};

#endif
