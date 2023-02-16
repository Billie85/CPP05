#include "Bureaucrat.hpp"

int Bureaucrat::getGrade() const
{
	 return(this->_grade);
}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
	}
	{
		std::cout << "success :)" << std::endl;
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name)
{
	this->_grade = other._grade;
}

Bureaucrat::Bureaucrat(): _name("default"), _grade(150){}

Bureaucrat::~Bureaucrat(){}

//===========operator============
Bureaucrat const &Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	return (*this);
}

std::ostream &operator<< (std::ostream &os, Bureaucrat const f)
{
	os << f.getName() << "Bureaucrat..." << f.getGrade() << std::endl;
	return (os);
}

//=========increment & decrement=======
void Bureaucrat::increment()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
		--(this->_grade);
}

void Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
		++(this->_grade);
}
