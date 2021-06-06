/*
 * ===================================================================
 *
 *       Filename:  Pony.hpp
 *
 *    Description: Pony class 
 *
 *        Version:  1.0
 *        Created:  03.06.2021 00:44:03
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string name;
		std::string color;
	public:
		Pony(std::string _name, std::string _color);
		~Pony(void);
		void ponyTalk(std::string phrase) const;
};

#endif
