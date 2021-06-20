/*
 * ===================================================================
 *
 *       Filename:  Intern.hpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 13:15:50
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

struct mapForms
{
	std::string _request;
	Form *(*create)(std::string);
};

class Intern
{
	private:
		mapForms _forms[3];

	public:
		Intern(void);
		Intern(Intern const & obj);
		~Intern(void);

		Intern & operator=(Intern const & obj);

		Form *makeForm(std::string request, std::string target) const;

		class NotValidRequestException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

#endif

