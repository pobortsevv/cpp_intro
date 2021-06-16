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

# include <iostream>
# include <ctime>
# include <cstdlib>

class ScavTrap
{
	private:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
        int _maxEnergyPoints;
		int _lvl;
		std::string _name;
		int _meleeAttackDamage;
		int _rangeAttackDamage;
		int _armorDamageReduction;

		void writePoem(std::string const & target);
		void talkDirt(std::string const & target);

	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const& obj);
		ScavTrap(std::string const& name);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & obj);

		void 	rangedAttack(std::string const & target);
		void 	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	challengeNewcomer(std::string const & target);
};

#endif

