# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 13:48:03 by pllucian          #+#    #+#              #
#    Updated: 2021/12/04 17:19:54 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Karen.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

INCL =	Karen.hpp

NAME = karen

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
