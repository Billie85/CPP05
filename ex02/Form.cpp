#include "Form.hpp"

//======new======
//純粋仮想関数だからオーバーライトさせる。
void Form::execute(Bureaucrat const &executor) const
{
	std::cout << "---executor---> " << executor.getGrade() << " | " << this->_RequiredToExecute <<std::endl;
	if (this->_signed == false)
		throw Form::NoSignException();
	else if(executor.getGrade() > this->_RequiredToExecute)
		throw Form::GradeTooLowException();
}

//========== check sign function =========
void Form::beSigned(Bureaucrat &bureaucrat)
{
	std::cout << "---Signed---> " << bureaucrat.getGrade() << " | " <<this->getRequiredToSign() <<std::endl;

	if (bureaucrat.getGrade() > this->getRequiredToSign())
		throw Form::GradeTooLowException();
	else
	{
		this->_signed = true;
	}
}

//==============exception class==============
const char *Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighExceptionwhat\n");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException\n");
}

const char *Form::NoSignException::what() const throw()
{
	return ("NoSignException\n");
}

//================ get and set================
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
	return (*this);
}

std::ostream &operator<< (std::ostream &os, const Form &f)
{
	os << "Form Name" << f.getName() << " requires grade " << f.getRequiredToSign() << " to sign " << f.getRequiredToSign() << std::endl;
	if (f.getSigned() == true)
	{
		os << "True it has been signed." << std::endl;
	}
	else
		os << "False it has not been signed." << std::endl;
	return (os);
}

//========constructors==========

Form::Form(): _name("name"), _signed(false), _RequiredToSign(150), _RequiredToExecute(150) {
}

Form::Form(std::string name, int to_sign, int to_exe):_name(name), _signed(false), _RequiredToSign(to_sign), _RequiredToExecute(to_exe)
   {
	if (to_sign < 1 || to_exe < 1)
	throw Form::GradeTooHighException();
	else if (to_sign > 150 || to_exe > 150)
	throw Form::GradeTooLowException();
	this->_signed = false;
   }

Form::Form(const Form &other):_name(other.getName()), _RequiredToSign(other.getRequiredToSign()),_RequiredToExecute(other.getRequiredToExecute()) 
{
	this->_signed = other._signed;
}

Form::~Form(){}
