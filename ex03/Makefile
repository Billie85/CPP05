NAME	=  Form_up_maggots


SRCS	= main.cpp \
		   Bureaucrat.cpp \
		   Form.cpp \
		   PresidentialPardonForm.cpp \
		   RobotomyRequestForm.cpp \
		   ShrubberyCreationForm.cpp \
		   Intern.cpp

OBJS		= $(SRCS:%.cpp=%.o)

CXX			= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean	:
		rm -f $(OBJS)

fclean	: clean
	rm -f $(NAME)

re : fclean all