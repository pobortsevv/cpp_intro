/*
 * ===================================================================
 *
 *       Filename:  RobotomyRequestForm.cpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 11:30:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("Robotomy Request Form", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & obj) :
	Form(obj)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->Form::getGradeToExe())
		throw Form::GradeTooLowException();
	std::cout << "$$$$$$....&&#..####...Brrr...ahh...##!..$$$$$" << std::endl;
	srand(time(nullptr));
    if (rand() % 2 == 0)
	{
		std::cout << this->_target << " has been successfully robotized!";
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->_target << " hasn't been robotized! Unlucky:(";
		std::cout << std::endl;
	}
}
