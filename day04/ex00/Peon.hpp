/*
 * ===================================================================
 *
 *       Filename:  Peon.hpp
 *
 *        Version:  1.0
 *        Created:  15.06.2021 18:36:47
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	private:
		std::string _name;
	
	public:
		Peon(std::string name);
		Peon(Peon const& obj);
		virtual ~Peon(void);

		Peon & operator=(Peon const & obj);

		void getPolymorphed(void) const;
};

#endif

