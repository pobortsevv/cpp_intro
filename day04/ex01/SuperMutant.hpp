/*
 * ===================================================================
 *
 *       Filename:  SuperMutant.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:10:35
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & obj);
		~SuperMutant(void);

		void takeDamage(int damage);
};

#endif

