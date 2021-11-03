# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 10:11:20 by azouiten          #+#    #+#              #
#    Updated: 2021/10/30 15:37:38 by azouiten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= frag
SRCS= ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp
OBJS= $(SRCS:.cpp=.o)
CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra -std=c++98

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
