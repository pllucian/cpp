# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 18:04:17 by pllucian          #+#    #+#              #
#    Updated: 2021/12/12 20:46:54 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Bureaucrat.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	Bureaucrat.hpp

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