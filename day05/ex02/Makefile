# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 10:11:20 by azouiten          #+#    #+#              #
#    Updated: 2021/10/08 16:24:40 by azouiten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=bureaucrat
SRCS=bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
OBJS=$(SRCS:.cpp=.o)
CXX=clang++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
HDR=bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp
.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all