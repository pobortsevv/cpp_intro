/*
 * ===================================================================
 *
 *       Filename:  RobotomyRequestForm.hpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 11:17:04
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & obj);
		virtual ~RobotomyRequestForm(void);

		void execute(Bureaucrat const & executor) const;
		static Form *create(std::string target);
};

#endif

