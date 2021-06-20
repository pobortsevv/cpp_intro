/*
 * ===================================================================
 *
 *       Filename:  Bureaucrat.cpp
 *
 *        Version:  1.0
 *        Created:  19.06.2021 23:23:32
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("noname"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int const grade) : _name(name)
{
	if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj) : _name(obj.getName())
{
	if (obj.getGrade() < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (obj.getGrade() > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = obj.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj)
{
	if (this == &obj)
		return *this;
	if (obj.getGrade() < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (obj.getGrade() > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = obj.getGrade();
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return o;
}

void Bureaucrat::incGrade(void)
{
	if (this->_grade - 1 < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decGrade(void)
{
	if (this->_grade + 1 > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName();
		std::cout << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " << form.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low!";
}
