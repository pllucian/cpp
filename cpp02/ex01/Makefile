# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 16:28:05 by pllucian          #+#    #+#              #
#    Updated: 2021/12/05 21:13:32 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Fixed.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	Fixed.hpp

NAME = test

CC = clang++

CFLAGS = -Wall -Wextra -Werror

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(INCL)
			$(CC) -o $@ $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
