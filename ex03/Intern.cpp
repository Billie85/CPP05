#include "Intern.hpp"

Form *Intern::makeForm(std::string form_name, std::string target)
{
	Form *form = (form_name == "Presidential Pardon") ? new PresidentialPardonForm(target) :
				 (form_name == "Robotomy Request") ?  new RobotomyRequestForm(target) :
				 (form_name == "Shrubbery Creation") ? new ShrubberyCreationForm(target) : static_cast<Form*>(NULL);//戻り値と同じ型に揃えてあげないとエラーが出る。
	if (!form)
		std::cout << "Form " << form_name << " doesn't exist" << std::endl;
	return(form);
}
Intern::Intern(){}
Intern::Intern(const Intern &other)
{
	(void)other;
}
Intern::~Intern(){}

Intern const &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}
