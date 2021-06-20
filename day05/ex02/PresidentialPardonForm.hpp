/*
 * ===================================================================
 *
 *       Filename:  PresidentialPardonForm.hpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 11:17:04
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & obj);
		virtual ~PresidentialPardonForm(void);

		void execute(Bureaucrat const & executor) const;
};

#endif

