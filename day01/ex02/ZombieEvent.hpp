/*
 * ===================================================================
 *
 *       Filename:  ZombieEvent.hpp
 *
 *        Version:  1.0
 *        Created:  03.06.2021 20:49:48
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string type_choice;

	public:
		void 	setZombieType(std::string _type);
		Zombie* newZombie(std::string name);
		Zombie	randomChump(void);
};

#endif

