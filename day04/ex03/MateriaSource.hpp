/*
 * ===================================================================
 *
 *       Filename:  MateriaSource.hpp
 *
 *        Version:  1.0
 *        Created:  18.06.2021 14:41:53
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

# define MAX_SOURCE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_source[MAX_SOURCE];
		int _count;
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & obj);
		virtual ~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &obj);
		int getCount(void) const;
		AMateria	*getMateria(int idx) const;

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
};

#endif

