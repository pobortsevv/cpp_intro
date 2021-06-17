/*
 * ===================================================================
 *
 *       Filename:  AWeapon.hpp
 *
 *    Description: My first abstract class
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:05:19
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		std::string _name;
		int _apcost;
		int _damage;

	public:
		AWeapon(void);
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & obj);
		virtual ~AWeapon(void);

		AWeapon & operator=(AWeapon const & obj);

		std::string const& getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;
};

#endif

