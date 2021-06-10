/*
 * ===================================================================
 *
 *       Filename:  Zombie.hpp
 *
 *    Description: Zombie class 
 *
 *        Version:  1.0
 *        Created:  03.06.2021 20:00:58
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string type;
		std::string name;

	public:
		Zombie(std::string _name, std::string _type);
		~Zombie(void);

		void announce(void) const;
};

#endif
