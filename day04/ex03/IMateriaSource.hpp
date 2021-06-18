/*
 * ===================================================================
 *
 *       Filename:  IMateriaSource.hpp
 *
 *        Version:  1.0
 *        Created:  18.06.2021 14:39:46
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <string>

class AMateria;

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
