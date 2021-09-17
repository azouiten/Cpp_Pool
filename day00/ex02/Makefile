# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azouiten <azouiten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 11:47:35 by azouiten          #+#    #+#              #
#    Updated: 2021/09/17 10:38:03 by azouiten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++

SRC_PATH = $(CURDIR)

SRC_NAME = Account.cpp tests.cpp

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ_PATH = $(CURDIR)

OBJ_NAME = $(SRC_NAME:.cpp=.o)

OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

CXXFLAGS = -Wall -Wextra -Werror

TARGET = Accounts

.PHONY: all, clean, fclean, re

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $^ -o $@

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -vf $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	@rm -vf $(TARGET)

re: fclean all