/*
 * ===================================================================
 *
 *       Filename:  WhiteWalker.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:10:35
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef WHITEWALKER_HPP
# define WHITEWALKER_HPP

# include "Enemy.hpp"

class WhiteWalker : public Enemy
{
	public:
		WhiteWalker(void);
		WhiteWalker(WhiteWalker const & obj);
		virtual ~WhiteWalker(void);

		void takeDamage(int damage);
};

#endif

