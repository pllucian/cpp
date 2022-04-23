# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 21:15:33 by pllucian          #+#    #+#              #
#    Updated: 2021/12/19 21:25:24 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	easyfind.hpp

DEPS = $(wildcard *.d)

NAME = test

CXX = clang++

CFLAGS = -Wall -Wextra -Werror

%.o:		%.cpp
			$(CXX) $(CFLAGS) -MMD -c $< -o $@

$(NAME):	$(OBJS)
			$(CXX) -o $@ $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(DEPS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

include		$(DEPS)
