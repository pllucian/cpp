# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 16:03:58 by pllucian          #+#    #+#              #
#    Updated: 2021/12/11 23:48:05 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		MateriaSource.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	AMateria.hpp \
		Ice.hpp \
		Cure.hpp \
		ICharacter.hpp \
		Character.hpp \
		IMateriaSource.hpp \
		MateriaSource.hpp

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
