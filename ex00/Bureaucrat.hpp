#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		class GradeTooHighException :public std::exception{
			const char *what() const throw();
		};
	public :
		class GradeTooLowException :public std::exception{
			const char *what() const throw();
		};
		Bureaucrat const &operator=(const Bureaucrat &other);
//==========get and set============
		int getGrade() const;
		std::string getName() const;
//==========constructor============
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat();
		~Bureaucrat();
//========= increment or decrement=========
		void increment();
		void decrement();
};
std::ostream &operator<< (std::ostream &os, Bureaucrat const f);
#endif