/*
 * ===================================================================
 *
 *       Filename:  Form.hpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 08:33:16
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _sign;
		const int _gradeToSign;
		const int _gradeToExe;

	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExe);
		Form(Form const & obj);
		virtual ~Form(void);

		Form & operator=(Form const & obj);
		std::string const & getName(void) const;
		bool getSign(void) const;
		int getGradeToSign(void) const;
		int getGradeToExe(void) const;

		void beSigned(Bureaucrat const & bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
		
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

std::ostream & operator<<(std::ostream & o, Form const & obj);

#endif

