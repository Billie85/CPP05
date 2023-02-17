#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

int main(void)
{
	try
	{
		std::string name;
		int grade;

		std::cout << "Enter -> Name | Grade ";
		std::cin >> name >> grade;
		Bureaucrat b(name, grade);

		std::string ShName;
		std::cout << "Enter -> ShrubberyCreationForm Name ";
		std::cin >> ShName;
		ShrubberyCreationForm s(ShName);
		s.beSigned(b);
		s.execute(b);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}