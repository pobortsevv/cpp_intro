/*
 * ===================================================================
 *
 *       Filename:  Victim.hpp
 *
 *        Version:  1.0
 *        Created:  15.06.2021 18:36:47
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	private:
		std::string _name;

	public:
		Victim(std::string name);
		Victim(Victim const& obj);
		virtual ~Victim(void);

		Victim & operator=(Victim const & obj);

		std::string getName(void) const;
		virtual void getPolymorphed(void) const;
};

std::ostream & operator<<(std::ostream & o, Victim const & obj);

#endif

