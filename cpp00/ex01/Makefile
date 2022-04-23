# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:37:23 by pllucian          #+#    #+#              #
#    Updated: 2021/11/30 14:23:02 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	PhoneBook.hpp \
		Contact.hpp

NAME = PhoneBook

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
