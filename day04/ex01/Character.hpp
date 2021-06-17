/*
 * ===================================================================
 *
 *       Filename:  Character.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:56:26
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>
# include <string>

# define MAX_AP 40
# define REC_AP 10

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon *_weapon;

	public:
		Character(void);
		Character(Character const & obj);
		Character(std::string const & name);
		virtual ~Character(void);

		std::string const & getName(void) const;
		int getAP(void) const;
		AWeapon *getWeapon(void) const;
		Character & operator=(Character const & obj);

		void recoverAP(void);
		void equip(AWeapon* weapon);
		void attack(Enemy* enemy);
};

std::ostream & operator<<(std::ostream & o, Character const& obj);

#endif

