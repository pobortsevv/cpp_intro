/*
 * ===================================================================
 *
 *       Filename:  Weapon.hpp
 *
 *    Description: Weapon class 
 *
 *        Version:  1.0
 *        Created:  05.06.2021 13:46:01
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const & getType(void) const;
		void	setType(std::string new_type);
};

#endif

