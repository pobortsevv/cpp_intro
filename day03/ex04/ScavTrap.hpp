/*
 * ===================================================================
 *
 *       Filename:  ScavTrap.hpp
 *
 *        Version:  1.0
 *        Created:  06.06.2021 21:14:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <ctime>
# include <cstdlib>

class ScavTrap : public ClapTrap
{
	private:
		void writePoem(std::string const & target) const;
		void talkDirt(std::string const & target) const;

	public:
		ScavTrap(void);
		ScavTrap(std::string const& name);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & obj);

		void	challengeNewcomer(std::string const & target);
		virtual void 	rangedAttack(std::string const & target) const;
		virtual void 	meleeAttack(std::string const & target) const;
};

#endif

