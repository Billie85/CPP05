#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighExceptionwhat\n");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException\n");
}

/* 	Add also a beSigned() member function to the Form that takes a Bureaucrat as
	parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
	(higher or egal to the required one). Remember, grade 1 is higher than grade 2.
	If the grade is too low, throw a Form::GradeTooLowException */
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getRequiredToSign())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

bool Form::getSigned() const
{
	return(this->_signed);
}

int Form::getRequiredToSign() const
{
	return (this->_RequiredToSign);
}

int Form::getRequiredToExecute() const
{
	return (this->_RequiredToExecute);
}

std::string Form::getName() const
{
	return(this->_name);
}

//=======operator==========
Form const &Form::operator=(const Form &other)
{
	this->_signed = other._signed;
/* 	this->_RequiredToSign = other._RequiredToSign;
	this->_RequiredToExecute = other._RequiredToExecute; */
	return (*this);
}

Form::Form(): _name("name"), _signed(false), _RequiredToSign(150), _RequiredToExecute(150) {
}


//Form::Form(const Form &other):_name(other._name), _RequiredToExecute(other._RequiredToExecute), _RequiredToSign(other._RequiredToSign), _signed(other._signed){}
Form::Form(std::string name, int to_sign, int to_exe):_name(name), _signed(false), _RequiredToSign(to_sign), _RequiredToExecute(to_exe)
   {
   if (to_sign < 1 || to_exe < 1)
   throw Form::GradeTooHighException();
   else if (to_sign > 150 || to_exe > 150)
   throw Form::GradeTooLowException();
   this->_signed = false;
   }
  

Form::~Form(){}

std::ostream &operator<< (std::ostream &os, const Form f)
{
	os << "Form" << f.getName() << " requires grade " << f.getRequiredToSign() << " to sign " << f.getRequiredToSign() << std::endl;
	if (f.getSigned() == true)
	{
		os << "True it has been signed." << std::endl;
	}
	else
		os << "False it has not been signed." << std::endl;
	return (os);
}
