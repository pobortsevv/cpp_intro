/*
 * ===================================================================
 *
 *       Filename:  WhiteWalker.cpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 10:13:08
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "WhiteWalker.hpp"

WhiteWalker::WhiteWalker(void) : Enemy(80, "WhiteWalker")
{
	std::cout << "* give us John Snow! *" << std::endl;
}

WhiteWalker::WhiteWalker(WhiteWalker const & obj) : 
	Enemy(obj.getHP(), obj.getType())
{
	std::cout << "* give us John Snow! *" << std::endl;
}

WhiteWalker::~WhiteWalker(void)
{
	std::cout << "* we will turn ur home in ice next time! *" << std::endl;
}

void WhiteWalker::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
