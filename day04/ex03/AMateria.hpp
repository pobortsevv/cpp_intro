/*
 * ===================================================================
 *
 *       Filename:  AMateria.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 18:33:21
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private:
		std::string _type;
		unsigned int _xp;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & obj);
		virtual ~AMateria();

		AMateria & operator=(AMateria const & obj);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif

