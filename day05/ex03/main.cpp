/*
 * ===================================================================
 *
 *       Filename:  main.cpp
 *
 *        Version:  1.0
 *        Created:  19.06.2021 23:49:41
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat  bob("Bob", 146);
    Bureaucrat  tom("Tom", 90);
	Intern		intern;
    Form        *tree = intern.makeForm("shrubbery creation", "bob");

    std::cout << *tree << tom << bob;
    tom.signForm(*tree);
    bob.signForm(*tree);
    std::cout << *tree << std::endl << std::endl;

	Form     *r_form = intern.makeForm("robotomy request", "Bender");
    while (bob.getGrade() > 35)
        bob.incGrade();
    std::cout << *r_form << std::endl;
    std::cout << bob << std::endl;
    tom.signForm(*r_form);
    std::cout << tom << std::endl;
    bob.executeForm(*r_form);
    tom.executeForm(*r_form);

    std::cout << std::endl;
	Form	*p_form = intern.makeForm("presidential pardon", "Hercules");
    while (bob.getGrade() > 3)
        bob.incGrade();
    std::cout << *p_form << std::endl;;
    std::cout << bob << std::endl;;
    bob.signForm(*p_form);
    tom.executeForm(*p_form);
    bob.executeForm(*p_form);

    delete p_form;
    delete r_form;
	delete tree;

	return 0;
}
