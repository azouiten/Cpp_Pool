# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 10:11:20 by azouiten          #+#    #+#              #
#    Updated: 2021/10/28 17:45:43 by azouiten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Karen
SRCS= main.cpp Karen.cpp
OBJS= $(SRCS:.cpp=.o)
CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98
HEADER= Karen.hpp

.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all