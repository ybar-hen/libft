# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                    +:+ +:+         +:+       #
#    By: ybar-hen <ybar-hen@student.42.fr>          +#+  +:+       +#+         #
#                                                +#+#+#+#+#+   +#+             #
#    Created: 2013/11/28 21:27:14 by ybar-hen          #+#    #+#              #
#    Updated: 2013/12/10 03:23:57 by ybar-hen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re

SRC = 	$(wildcard *.c)

HEAD = libft.h

OBJ = $(SRC:.c=.o)

LIBNAME = libft.a

FLAGS = -Wall -Werror -Wextra

NAME = libft

all: $(NAME)

$(NAME):
	cc -c $(FLAGS) $(SRC)
	ar rc $(LIBNAME) $(OBJ)
	ranlib $(LIBNAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBNAME)
	rm -f a.out

re: fclean all


