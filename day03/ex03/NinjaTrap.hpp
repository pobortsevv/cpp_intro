/*
 * ===================================================================
 *
 *       Filename:  NinjaTrap.hpp
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

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <ctime>
# include <cstdlib>

class NinjaTrap : public ClapTrap
{
	private:
		void makeMacaroni(std::string const & target);
		void doFlip(std::string const & target);

	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		NinjaTrap & operator=(NinjaTrap const & obj);

		void	ninjaShoebox(ClapTrap &clap);
		void	ninjaShoebox(FragTrap &frag);
		void	ninjaShoebox(ScavTrap &scav);
		void	ninjaShoebox(NinjaTrap &ninja);
};

#endif

