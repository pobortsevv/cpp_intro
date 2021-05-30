/*
 * ===================================================================
 *
 *       Filename:  ContactList.hpp
 *
 *    Description: Class that contain 8 contacts in array 
 *
 *        Version:  1.0
 *        Created:  29.05.2021 13:26:14
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef CONTACTLIST_H
# define CONTACTLIST_H

# include "Contact.hpp"

class ContactList
{
	private:
		Contact book[8];

	public:
		void Add(int index);
		void Search(std::string name);
};

#endif
