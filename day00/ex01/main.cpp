/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description: Place where program begins 
 *
 *        Version:  1.0
 *        Created:  30.05.2021 12:12:22
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Contact.hpp"
#include "ContactList.hpp"

std::string string_toupper(std::string str)
{
	int i = 0;
	
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	int 		count = 0;
	std::string command;
	ContactList book;

	std::cout << std::setw(50) << "\033[1;32mWelcome to Phonebook!\n \033[0m";
	while (1)
	{
		std::cout << "\nEnter command: ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, command);
		/*-----------------------------
		 * We check for eof in getline
		 *-----------------------------*/
		if (std::cin.eof() != 0)
			exit (0);
		command = string_toupper(command);
		if (command == "ADD")
		{
			if (count >= 8)
				std::cout << "Phone book is full!" << std::endl;
			else
			{
				book.Add(count);
				count++;
			}
		}
		else if (command == "SEARCH")
			book.Search(count);
		else if (command == "EXIT")
			return (0);
		else
			std::cout << "That's a wrong command, try again" << std::endl;
	}
}
