#include "Intern.hpp"

Form *Intern::makeForm(std::string str)
{
	Form *f1 = \
	(str == "PresidentialPardonForm") ? new PresidentialPardonForm("presidential made in Intern") \
	: (str == "RobotomyRequestForm") ?  new RobotomyRequestForm("Robotomy made in Intern") \
	: (str == "ShrubberyCreationForm") ? new ShrubberyCreationForm("Shrubbery made in Intern") \
	: static_cast<Form *>(NULL);//void *型だから直してあげる必要がある。
	return(f1);
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