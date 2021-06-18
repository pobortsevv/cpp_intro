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

# include <string>
# include <cstdint>

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
		virtual ~AMateria(void);

		AMateria & operator=(AMateria const & obj);

		std::string const & getType(void) const; //Returns the materia type
		unsigned int getXP(void) const; //Returns the Materia's XP
		void increaseXP(void);

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif

