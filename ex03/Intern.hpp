#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public :
		Form *makeForm(std::string str);
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern const &operator= (const Intern &other);
};
//std::ostream &operator<< (std::ostream &os, const Intern &f);
#endif