#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form ("RobotomyRequestForm", 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(std::string name): Form (name, 72, 45){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other):Form(other){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm const &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	Form::operator=(other);
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "drilling noises" << std::endl;
	if(rand() % 2)
		std::cout << "Has been robotomized." << std::endl;
    else
        std::cout <<"Is failed to robotomy." << std::endl;
}