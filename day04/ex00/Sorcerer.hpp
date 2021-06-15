/*
 * ===================================================================
 *
 *       Filename:  Sorcerer.hpp
 *
 *    Description: main sorcerer class
 *
 *        Version:  1.0
 *        Created:  15.06.2021 17:28:14
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer(void); 

	public:
		Sorcerer(std::string name, std::string title); 
		Sorcerer(Sorcerer const& obj); 
		~Sorcerer(void); 
		
		Sorcerer & operator=(Sorcerer const& obj);

		std::string getName(void) const;
		std::string getTitle(void) const;
		void	polymorph(Victim const& victim) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const& obj);

#endif

