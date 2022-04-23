# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 20:30:48 by pllucian          #+#    #+#              #
#    Updated: 2021/12/03 19:11:36 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	Zombie.hpp

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
