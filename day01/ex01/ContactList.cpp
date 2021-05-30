/*
 * ===================================================================
 *
 *       Filename:  ContactList.cpp
 *
 *    Description: Methods of ContactList class 
 *
 *        Version:  1.0
 *        Created:  30.05.2021 12:00:09
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "ContactList.hpp"
#include <iomanip>

void ContactList::Add(int index)
{
	Contact 	new_c;
	std::string tmp;

	/*-----------------------------------------------------------------------------
	 * Initialisation of a new contact in our contact book
	 *-----------------------------------------------------------------------------*/
	new_c.setIndex(index);
	std::cout << "Enter first name" << std::endl;
	std::cin >> tmp;
	new_c.setFirst(tmp);
	std::cout << "Enter last name" << std::endl;
	std::cin >> tmp;
	new_c.setLast(tmp);
	std::cout << "Enter nickname" << std::endl;
	std::cin >> tmp;
	new_c.setNickname(tmp);
	std::cout << "Enter login" << std::endl;
	std::cin >> tmp;
	new_c.setLogin(tmp);
	std::cout << "Enter postal address" << std::endl;
	std::cin >> tmp;
	new_c.setPostal(tmp);
	std::cout << "Enter email address" << std::endl;
	std::cin >> tmp;
	new_c.setEmail(tmp);
	std::cout << "Enter phone number" << std::endl;
	std::cin >> tmp;
	new_c.setPhone(tmp);
	std::cout << "Enter birthday date" << std::endl;
	std::cin >> tmp;
	new_c.setBirthday(tmp);
	std::cout << "Enter favorite meal" << std::endl;
	std::cin >> tmp;
	new_c.setMeal(tmp);
	std::cout << "Enter underwear color (very important)" << std::endl;
	std::cin >> tmp;
	new_c.setUnderwear(tmp);
	std::cout << "Enter darkest secret (we not gonna tell anyone, shhhh...)" << std::endl;
	std::cin >> tmp;
	new_c.setSecret(tmp);
	std::cout << "Thats all, you added " << new_c.getFirst() << "\'s contact!" << std::endl;
	this->book[index] = new_c;
}
