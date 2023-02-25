#include "ShrubberyCreationForm.hpp"

//operator & constructor
ShrubberyCreationForm const &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	return *this;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string other_name): Form(other_name, 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other){}
ShrubberyCreationForm::~ShrubberyCreationForm(){}

//function
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream outfile;
	outfile.open((executor.getName() + "_shrubbery").c_str());
	outfile << ASCIITREE << std::endl;
	outfile.close();
}