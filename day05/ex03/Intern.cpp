/*
 * ===================================================================
 *
 *       Filename:  Intern.cpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 13:34:50
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->_forms[0]._request = "shrubbery creation";
	this->_forms[0].create = ShrubberyCreationForm::create;
	this->_forms[1]._request = "robotomy request";
	this->_forms[1].create = RobotomyRequestForm::create;
	this->_forms[2]._request = "presidential pardon";
	this->_forms[2].create = PresidentialPardonForm::create;
}

Intern::Intern(Intern const & obj)
{
	this->_forms[0]._request = "shrubbery creation";
	this->_forms[0].create = ShrubberyCreationForm::create;
	this->_forms[1]._request = "robotomy request";
	this->_forms[1].create = RobotomyRequestForm::create;
	this->_forms[2]._request = "presidential pardon";
	this->_forms[2].create = PresidentialPardonForm::create;
	(void)obj;
}

Intern::~Intern(void)
{}

Intern & Intern::operator=(Intern const & obj)
{
	if (this == &obj)
		return *this;
	return *this;
}

Form *Intern::makeForm(std::string request, std::string target) const
{
	for (int i = 0; i < 3; i++)
	{
		if (request == this->_forms[i]._request)
			return this->_forms[i].create(target);
	}
	throw Intern::NotValidRequestException();
	return nullptr;
}

const char *Intern::NotValidRequestException::what(void) const throw()
{
	return "Not a valid request for creation form";
}
