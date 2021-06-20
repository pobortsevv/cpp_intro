/*
 * ===================================================================
 *
 *       Filename:  ShrubberyCreationForm.hpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 11:17:04
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & obj);
		virtual ~ShrubberyCreationForm(void);

		void execute(Bureaucrat const & executor) const;
		static Form *create(std::string target);
};

#endif

