# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/08 10:11:20 by azouiten          #+#    #+#              #
#    Updated: 2021/09/08 12:24:18 by azouiten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME="megaphone"
SRCS= megaphone.cpp
OBJS= $(SRCS:.cpp=.o)
CXX= clang++
CXXFLAGS= -Wall -Werror -Wextra

.phony: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all