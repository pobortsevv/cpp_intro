/*
 * ===================================================================
 *
 *       Filename:  Bureaucrat.hpp
 *
 *    Description: starting exporation of exceptions in c++
 *
 *        Version:  1.0
 *        Created:  19.06.2021 18:26:19
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

# define MAX_GRADE 1
# define MIN_GRADE 150

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int const grade);
		Bureaucrat(Bureaucrat const & obj);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & obj);
		std::string getName(void) const;
		int getGrade(void) const;

		void incGrade(void);
		void decGrade(void);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

#endif

