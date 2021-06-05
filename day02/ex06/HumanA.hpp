/*
 * ===================================================================
 *
 *       Filename:  HumanA.hpp
 *
 *        Version:  1.0
 *        Created:  05.06.2021 13:53:16
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void) const;

};

#endif

