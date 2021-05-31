/*
 * ===================================================================
 *
 *       Filename:  Contact.cpp
 *
 *    Description:  Methods of Contact class
 *
 *        Version:  1.0
 *        Created:  29.05.2021 20:45:18
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Contact.hpp"

void Contact::ShowInfo(void)
{
	std::cout << std::setw(40) << "Contact Info\n" << std::endl;
	std::cout << "• First Name		: " << this->first_name << std::endl;	
	std::cout << "• Last Name		: " << this->last_name << std::endl;	
	std::cout << "• Nicname    		: " << this->nickname << std::endl;	
	std::cout << "• Login			: " << this->login << std::endl;	
	std::cout << "• Postal Address	: " << this->postal_address << std::endl;	
	std::cout << "• Email Address 	: " << this->email_address << std::endl;	
	std::cout << "• Phone Number 		: " << this->phone_number << std::endl;	
	std::cout << "• Birthday Date 	: " << this->birthday_date << std::endl;	
	std::cout << "• Favorite Meal 	: " << this->favorite_meal << std::endl;	
	std::cout << "• Underwear Color	: " << this->underwear_color << std::endl;	
	std::cout << "• Darkest Secret	: " << this->darkest_secret << std::endl;	
}

int	Contact::getIndex(void)
{
	return (this->index);
}

void Contact::setIndex(int _index)
{
	this->index = _index;
}

std::string Contact::getFirst(void)
{
	return (this->first_name);
}

void Contact::setFirst(std::string _first)
{
	this->first_name = _first;
}

std::string Contact::getLast(void)
{
	return (this->last_name);
}

void Contact::setLast(std::string _last)
{
	this->last_name = _last;
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

void Contact::setNickname(std::string _nickname)
{
	this->nickname = _nickname;
}

std::string Contact::getLogin(void)
{
	return (this->login);
}

void Contact::setLogin(std::string _login)
{
	this->login = _login;
}

std::string Contact::getPostal(void)
{
	return (this->postal_address);
}

void Contact::setPostal(std::string _postal)
{
	this->postal_address = _postal;
}

std::string Contact::getEmail(void)
{
	return (this->email_address);
}

void Contact::setEmail(std::string _email)
{
	this->email_address = _email;
}

std::string Contact::getPhone(void)
{
	return (this->phone_number);
}

void Contact::setPhone(std::string _phone)
{
	this->phone_number = _phone;
}

std::string Contact::getBirthday(void)
{
	return (this->birthday_date);
}

void Contact::setBirthday(std::string _birthday)
{
	this->birthday_date = _birthday;
}

std::string Contact::getMeal(void)
{
	return (this->favorite_meal);
}

void Contact::setMeal(std::string _meal)
{
	this->favorite_meal = _meal;
}

std::string Contact::getUnderwear(void)
{
	return (this->underwear_color);
}

void Contact::setUnderwear(std::string _underwear)
{
	this->underwear_color = _underwear;
}

std::string Contact::getSecret(void)
{
	return (this->darkest_secret);
}

void Contact::setSecret(std::string _secret)
{
	this->darkest_secret = _secret;
}
