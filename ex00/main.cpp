#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::string str;
		int grade;

		std::cout << "Enter (String | Grade) -> ";
		std::cin >> str >> grade;

		if (str.empty())
		{
			throw std::invalid_argument("name cannot be empty");
		}
		Bureaucrat b(str, grade);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}