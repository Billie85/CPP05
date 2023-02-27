#include "Bureaucrat.hpp"

void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

int Bureaucrat::getGrade() const
{
	//std::cout << "GetGrade called" << std::endl;
	 return(this->_grade);
}

std::string Bureaucrat::getName() const
{
	//std::cout << "GetName called" << std::endl;
	return(this->_name);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	//std::cout << "TooHight Exception called" << std::endl;
	return "GradeTooHighException\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	//std::cout << "TooLow Exception called" << std::endl;
	return "GradeTooLowException\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	//std::cout << "double constructor called" << std::endl;
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw GradeTooLowException();
	}
	else
	{
		this->_grade = grade;
		std::cout << "success!!" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name)
{
	
	//std::cout << "copy constructor called" << std::endl;
	this->_grade = other._grade;
}

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	//std::cout << "default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){}

//===========operator============
Bureaucrat const &Bureaucrat::operator=(const Bureaucrat &other)
{
	//std::cout << "operator= called " << std::endl;
	this->_grade = other._grade;
	return (*this);
}

std::ostream &operator<< (std::ostream &os, Bureaucrat const f)
{
	//std::cout << "operator<< called " << std::endl;
	os << f.getName() << "Bureaucrat..." << f.getGrade() << std::endl;
	return (os);
}

//=========increment & decrement=======
void Bureaucrat::increment()
{
	//std::cout << "increment func called " << std::endl;
	if (this->_grade <= 1)
		throw GradeTooHighException();
	else
		--(this->_grade);
}

void Bureaucrat::decrement()
{
	//std::cout << "decrement func called " << std::endl;
	if (this->_grade >= 150)
		throw GradeTooLowException();
	else
		++(this->_grade);
}
