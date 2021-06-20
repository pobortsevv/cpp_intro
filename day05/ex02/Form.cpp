/*
 * ===================================================================
 *
 *       Filename:  Form.cpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 09:21:30
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Form.hpp"

Form::Form(void) : _name("default"), _sign(false),
	_gradeToSign(MIN_GRADE), _gradeToExe(MIN_GRADE)
{}

Form::Form(std::string name, int gradeToSign, int gradeToExe) : _name(name),
	_gradeToSign(gradeToSign), _gradeToExe(gradeToExe)
{
	if (gradeToSign > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (gradeToSign < MAX_GRADE)
		throw Form::GradeTooHighException();
	if (gradeToExe > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (gradeToExe < MAX_GRADE)
		throw Form::GradeTooHighException();
}

Form::Form(Form const & obj) : _name(obj.getName()),
	_gradeToSign(obj.getGradeToSign()), _gradeToExe(obj.getGradeToExe())
{
	if (obj.getGradeToSign() > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (obj.getGradeToSign() < MAX_GRADE)
		throw Form::GradeTooHighException();
	if (obj.getGradeToExe() > MIN_GRADE)
		throw Form::GradeTooLowException();
	else if (obj.getGradeToExe() < MAX_GRADE)
		throw Form::GradeTooHighException();
}

Form::~Form(void)
{}

Form & Form::operator=(Form const & obj)
{
	if (this == &obj)
		return *this;
	this->_sign = obj.getSign();
	return *this;
}

std::string const & Form::getName(void) const
{
	return this->_name;
}

bool Form::getSign(void) const
{
	return this->_sign;
}

int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int Form::getGradeToExe(void) const
{
	return this->_gradeToExe;
}


std::ostream & operator<<(std::ostream & o, Form const & obj)
{
	if (obj.getSign() == true)
		o << "Signed form ";
	else 
		o << "Unsigned form ";
	o << obj.getName() << ", grade required to sign: ";
	o << obj.getGradeToSign() << "; grade required to execute: ";
	o << obj.getGradeToExe() << std::endl;
	return o;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high for form!";
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low for form!";
}

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_sign = true;
	else
		throw Form::GradeTooLowException();
}
