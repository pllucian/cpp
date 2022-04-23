# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 20:22:09 by pllucian          #+#    #+#              #
#    Updated: 2021/12/04 00:06:52 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = replace

CC = clang++

CFLAGS = -Wall -Wextra -Werror

%.o:		%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(INCL)
			$(CC) -o $@ $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS) *.replace

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
