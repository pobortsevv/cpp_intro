/*
 * ===================================================================
 *
 *       Filename:  PowerFist.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:28:40
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist const & obj);
		virtual ~PowerFist(void);

		void attack(void) const;
};

#endif
