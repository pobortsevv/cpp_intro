/*
 * ===================================================================
 *
 *       Filename:  SuperTrap.hpp
 *
 *        Version:  1.0
 *        Created:  06.06.2021 21:14:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>
# include <ctime>
# include <cstdlib>

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
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

	public:
		SuperTrap(void);
		SuperTrap(std::string const& name);
		~SuperTrap(void);
		SuperTrap & operator=(SuperTrap const & obj);
		
		void 	rangedAttack(std::string const & target) const;
		void 	meleeAttack(std::string const & target) const;

};

#endif

