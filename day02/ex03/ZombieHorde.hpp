/*
 * ===================================================================
 *
 *       Filename:  ZombieHorde.hpp
 *
 *        Version:  1.0
 *        Created:  04.06.2021 13:18:32
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int n;
		Zombie *zombies;

	public:
		ZombieHorde(int _n);
		~ZombieHorde(void);
		void announce(void) const;
};

#endif

