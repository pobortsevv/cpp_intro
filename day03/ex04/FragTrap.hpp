/*
 * ===================================================================
 *
 *       Filename:  FragTrap.hpp
 *
 *    Description: This is my introduction in c++ Inheritance
 *    	hope i'll enjoy it
 *
 *        Version:  1.0
 *        Created:  06.06.2021 21:14:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <ctime>
# include <cstdlib>

class FragTrap : virtual public ClapTrap
{
	private:
		void makeMacaroni(std::string const & target) const;
		void doFlip(std::string const & target) const;

	public:
		FragTrap(void);
		FragTrap(std::string const& name);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & obj);

		void	vaulthunter_dot_exe(std::string const & target);
};

#endif

