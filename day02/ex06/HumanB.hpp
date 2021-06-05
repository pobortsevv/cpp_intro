/*
 * ===================================================================
 *
 *       Filename:  HumanB.hpp
 *
 *        Version:  1.0
 *        Created:  05.06.2021 13:53:16
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	
	public:
		HumanB(std::string name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void) const;
};

#endif

