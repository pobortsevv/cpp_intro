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
	getline(std::cin, tmp);
	new_c.setFirst(tmp);
	std::cout << "Enter last name" << std::endl;
	getline(std::cin, tmp);
	new_c.setLast(tmp);
	std::cout << "Enter nickname" << std::endl;
	getline(std::cin, tmp);
	new_c.setNickname(tmp);
	std::cout << "Enter login" << std::endl;
	getline(std::cin, tmp);
	new_c.setLogin(tmp);
	std::cout << "Enter postal address" << std::endl;
	getline(std::cin, tmp);
	new_c.setPostal(tmp);
	std::cout << "Enter email address" << std::endl;
	getline(std::cin, tmp);
	new_c.setEmail(tmp);
	std::cout << "Enter phone number" << std::endl;
	getline(std::cin, tmp);
	new_c.setPhone(tmp);
	std::cout << "Enter birthday date" << std::endl;
	getline(std::cin, tmp);
	new_c.setBirthday(tmp);
	std::cout << "Enter favorite meal" << std::endl;
	getline(std::cin, tmp);
	new_c.setMeal(tmp);
	std::cout << "Enter underwear color (very important)" << std::endl;
	getline(std::cin, tmp);
	new_c.setUnderwear(tmp);
	std::cout << "Enter darkest secret (we not gonna tell anyone, shhhh...)" << std::endl;
	getline(std::cin, tmp);
	new_c.setSecret(tmp);
	std::cout << "Thats all, you added " << new_c.getFirst() << "\'s contact!" << std::endl;
	this->book[index] = new_c;
}

void ContactList::ShowSearchPromt(int count)
{
	int i = 0;

	std::cout << "|" << std::setw(10);
	std::cout << "Index";
	std::cout << "|" << std::setw(10);
	std::cout << "First Name";
	std::cout << "|" << std::setw(10);
	std::cout << "Last Name";
	std::cout << "|" << std::setw(10);
	std::cout << "Nickname";
	std::cout << "|" << std::endl;
	while (i < count)
	{
		std::string first = this->book[i].getFirst();
		std::string last = this->book[i].getLast();
		std::string nickname = this->book[i].getNickname();

		if (first.size() > 10)
		{
			first.resize(9);
			first.resize(10, '.');
		}
		if (last.size() > 10)
		{
			last.resize(9);
			last.resize(10, '.');
		}
		if (nickname.size() > 10)
		{
			nickname.resize(9);
			nickname.resize(10, '.');
		}
		std::cout << "|" << std::setw(10);
		std::cout << this->book[i].getIndex();
		std::cout << "|" << std::setw(10);
		std::cout << first;
		std::cout << "|" << std::setw(10);
		std::cout << last;
		std::cout << "|" << std::setw(10);
		std::cout << nickname;
		std::cout << "|" << std::endl;
		i++;
	}
}

void ContactList::Search(int count)
{
	std::string choice;
	int number;

	ShowSearchPromt(count);	
	std::cout << "\nChoose a contact by number\n";
	getline(std::cin, choice);
	if (std::cin.eof() != 0)
		exit(0);
	/*-----------------------------------------------------------------------------
	 * stoi turns string to integer 
	 *-----------------------------------------------------------------------------*/
	number = std::stoi(choice);
	if (number < 0 || number >= count)
		std::cout << "\033[1;31mContact not found!\n \033[0m";
	else
		this->book[number].ShowInfo();
}
