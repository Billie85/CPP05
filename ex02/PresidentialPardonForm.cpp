#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(std::string name): Form(name, 25, 5){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):Form(other){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm const &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	Form::operator=(other);
	return(*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}