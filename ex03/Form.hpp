#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _RequiredToSign;
	int const _RequiredToExecute;

public:
	class GradeTooHighException :public std::exception
	{
		const char *what() const throw();
	};
public:
	class GradeTooLowException :public std::exception
	{
		const char *what() const throw();
	};
public :
	class NoSignException :public std::exception
	{
		const char *what() const throw();
	};
	Form const &operator=(const Form &other);

	void beSigned(Bureaucrat &bureaucrat);
	bool getSigned() const;
	int getRequiredToSign() const;
	int getRequiredToExecute() const;
	std::string getName() const;
	virtual void execute(Bureaucrat const &executor) const = 0;

	Form();
	Form(const Form &other);
	Form(std::string name, int to_sign, int to_exe);
	~Form();
};

std::ostream &operator<< (std::ostream &os, const Form &f);
#endif