# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 17:46:48 by pllucian          #+#    #+#              #
#    Updated: 2021/12/11 00:25:47 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp

DEPS = $(wildcard *.d)

NAME = test

CC = clang++

CFLAGS = -Wall -Wextra -Werror

%.o:		%.cpp
			$(CC) $(CFLAGS) -MMD -c $< -o $@

$(NAME):	$(OBJS)
			$(CC) -o $@ $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

include		$(DEPS)
