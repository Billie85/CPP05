#include "Bureaucrat.hpp"

int main(void)
{
	std::string str;
	int start;
	int turn;

	std::cout << "Enter (String | Start_num | Turn_num) -> ";
	std::cin >> str >> start >> turn;
	try
	{
		Bureaucrat b(str, start);
		if (start > 0)
		{
			for (int j = 0; j < turn; j++)
			{
				std::cout << b.getName() << " " << " Bureaucrat Grade-> " << b.getGrade() << std::endl;
				b.increment();
			}
		}
		else
		{
			for (int i = 0; i < turn; i++)
			{
				std::cout << b.getName() << " " << " Bureaucrat Grade-> " << b.getGrade() << std::endl;
				b.decrement();
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}