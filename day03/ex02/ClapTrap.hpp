/*
 * ===================================================================
 *
 *       Filename:  ClapTrap.hpp
 *
 *    Description: Parentness class that Frag and Scav will inherit from
 *
 *        Version:  1.0
 *        Created:  06.06.2021 21:14:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>

class ClapTrap
{
	protected:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _lvl;
		std::string _name;
		int _meleeAttackDamage;
		int _rangeAttackDamage;
		int _armorDamageReduction;

	public:
		ClapTrap(void);
		ClapTrap(std::string const& name);
		ClapTrap(std::string const& name, int hitPoints, int maxHitPoint, int energyPoints, int maxEnergyPoints, int lvl,
				int meleeAttackDamage,
				int rangeAttackDamage,
				int armorDamageReduction);
		~ClapTrap(void);
		ClapTrap & operator=(ClapTrap const & obj);

		void 	rangedAttack(std::string const & target) const;
		void 	meleeAttack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void) const;
};

#endif

