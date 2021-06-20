/*
 * ===================================================================
 *
 *       Filename:  ShrubberyCreationForm.cpp
 *
 *        Version:  1.0
 *        Created:  20.06.2021 11:30:11
 *       Compiler:  clang++
 *
 *         Author:  sabra
 *
 * ===================================================================
 */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("Shrubbery Creation Form", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & obj) :
	Form(obj)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (executor.getGrade() > this->Form::getGradeToExe())
			throw Form::GradeTooLowException();
		std::ofstream ofs(this->_target + "_shrubbery", std::ios::out);
		ofs 
			<< "          .     .  .      +     .      .          ." << std::endl
			<< "     .       .      .     #       .           ." << std::endl
			<< "        .      .         ###            .      .      ." << std::endl
			<< "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl
			<< "          .      . \"####\"###\"####\"  ." << std::endl
			<< "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl
			<< "  .             \"#########\"#########\"        .        ." << std::endl
			<< "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl
			<< "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl
			<< "                .\"##\"#####\"#####\"##\"           .      ." << std::endl
			<< "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl
			<< "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl
			<< "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl
			<< "            .     \"      000      \"    .     ." << std::endl
			<< "       .         .   .   000     .        .       ." << std::endl
			<< ".. .. ..................O000O........................ ......" << std::endl;
		ofs.close();
	}
	catch (std::ifstream::failure e)
	{
		std::cerr << "Fail to open file: " << e.what() << std::endl;
	}
}

Form *ShrubberyCreationForm::create(std::string target)
{
	return new ShrubberyCreationForm(target);
}
