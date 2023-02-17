#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm :public Form
{
private:

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	~PresidentialPardonForm();
	PresidentialPardonForm const &operator=(const PresidentialPardonForm &other);
	void execute(Bureaucrat const & executor) const;
};

#endif