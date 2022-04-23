# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 17:15:11 by pllucian          #+#    #+#              #
#    Updated: 2021/12/03 19:12:06 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	Weapon.hpp \
		HumanA.hpp \
		HumanB.hpp

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
