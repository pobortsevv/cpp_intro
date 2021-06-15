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

# include <iostream>
# include <ctime>
# include <cstdlib>

class FragTrap
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

		void makeMacaroni(std::string const & target);
		void doFlip(std::string const & target);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & obj);

		void 	rangedAttack(std::string const & target);
		void 	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif

