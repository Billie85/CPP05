#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm :public Form
{
private:

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string other_name);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm const &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};

#define ASCIITREE \
"\
                       :\n\
                      /*\\\n\
                     /***\\\n\
                    /***~\\\n\
				   /*******\\\n\
				  /*********\\\n\
				 /**~****~***\\\n\
				/**~**********\\\n\
			   /*******~***~***\\\n\
			  /****~************\\\n\
			 /**********~****~***\\\n\
			****---|-------|---****\n\
			       |       |\n\
				   |-------|\n\
"

#endif