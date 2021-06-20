/*
 * ===================================================================
 *
 *       Filename:  PresidentialPardonForm.cpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 11:30:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("Presidential Pardon Form", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & obj) :
	Form(obj)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->Form::getGradeToExe())
		throw Form::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox.";
	std::cout << std::endl;
}

Form *PresidentialPardonForm::create(std::string target)
{
	return new PresidentialPardonForm(target);
}
