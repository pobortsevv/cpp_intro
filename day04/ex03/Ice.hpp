/*
 * ===================================================================
 *
 *       Filename:  Ice.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 18:33:21
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const & obj);
		virtual ~Ice();

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif

