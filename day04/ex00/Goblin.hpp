/*
 * ===================================================================
 *
 *       Filename:  Goblin.hpp
 *
 *        Version:  1.0
 *        Created:  06/17/2021 08:43:05
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef GOBLIN_HPP
# define GOBLIN_HPP

# include "Victim.hpp"

class Goblin : public Victim
{
	private:
		std::string _name;

	public:
		Goblin(std::string name);
		Goblin(Goblin const& obj);
		virtual ~Goblin(void);

		Goblin & operator=(Goblin const & obj);

		void getPolymorphed(void) const;
};

#endif

