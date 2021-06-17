/*
 * ===================================================================
 *
 *       Filename:  Enemy.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 09:44:23
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	private:
		int _hp;
		std::string _type;

	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & obj);
		virtual ~Enemy(void);

		Enemy & operator=(Enemy const & obj);

		std::string const& getType(void) const;
		int getHP(void) const;

		virtual void takeDamage(int damage);
};

#endif

