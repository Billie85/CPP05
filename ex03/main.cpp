#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

int main()
{
	try
	{
		std::string name;
		int grade;

		std::cout << "Enter Name | Grade -> ";
		std::cin >> name >> grade;
		Bureaucrat b(name, grade);

		std::string ShName;
		std::cout << "Enter Shrubbery Creation Form Name -> ";
		std::cin >> ShName;
		ShrubberyCreationForm s(ShName);
		b.signForm(s);
		b.executeForm(s);

		std::string RobotName;
		std::cout << "Enter Robotomy Request Form Name -> ";
		std::cin >> RobotName;
		RobotomyRequestForm r(RobotName);
		b.signForm(r);
		b.executeForm(r);

		std::string PresidentName;
		std::cout << "Enter Presidential Pardon Form Name -> ";
		std::cin >> PresidentName;
		PresidentialPardonForm p(PresidentName);
		b.signForm(p);
		b.executeForm(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
