/*
 * ===================================================================
 *
 *       Filename:  Cure.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 18:33:21
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & obj);
		virtual ~Cure();

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif

