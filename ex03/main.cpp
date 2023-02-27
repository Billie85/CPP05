#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* f = someRandomIntern.makeForm("Robotomy Request", "Bender");
		if (f != 0)
		{
			Bureaucrat b("42Tokyo", 6);
			b.signForm(*f);
			b.executeForm(*f);
			delete f;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
