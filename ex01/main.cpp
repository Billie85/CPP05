#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		//====== Bureaucrat version =======
		std::string name;
		int num;
	
		std::cout << "Choose Bureaucrat -> String / Number " ;
		std::cin >> name >> num;

		if (name.empty() || num < 1 || num > 150)
			throw std::invalid_argument("Error Invalid input");
		Bureaucrat b(name, num);

		//===== Form version ======
		std::string form_name;
		int r_sign;
		int r_exe;

		std::cout << "Choose Form -> String / Sign / Execute " ;
		std::cin >> form_name >> r_sign >> r_exe ;
		if (form_name.empty() || r_sign < 1 || r_sign > 150 || r_exe < 1 || r_exe > 150)
			throw std::invalid_argument("Error Invalid input");

		Form f(form_name, r_sign, r_exe);
		f.beSigned(b);
		b.signForm(f);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}