/*
 * ===================================================================
 *
 *       Filename:  Character.hpp
 *
 *        Version:  1.0
 *        Created:  18.06.2021 00:14:42
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

# define FULL_INVENTORY 4

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[FULL_INVENTORY];
		int _count;
	
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & obj);
		virtual ~Character(void);

		std::string const & getName(void) const;
		AMateria *getMateria(int idx) const;
		Character &operator=(Character const & obj);
		int getCount(void) const;

		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif

