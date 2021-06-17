/*
 * ===================================================================
 *
 *       Filename:  RadScorpion.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:10:35
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & obj);
		virtual ~RadScorpion(void);

		void takeDamage(int damage);
};

#endif

