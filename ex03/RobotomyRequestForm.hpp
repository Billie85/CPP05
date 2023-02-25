#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm :public Form
{
private:

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	~RobotomyRequestForm();
	RobotomyRequestForm const &operator=(const RobotomyRequestForm &other);
	void execute(Bureaucrat const & executor) const;
};

#endif