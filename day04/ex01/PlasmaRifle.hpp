/*
 * ===================================================================
 *
 *       Filename:  PlasmaRifle.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:28:40
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & obj);
		virtual ~PlasmaRifle(void);

		void attack(void) const;
};

#endif
