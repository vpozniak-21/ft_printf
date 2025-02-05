# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 20:12:22 by vpozniak          #+#    #+#              #
#    Updated: 2025/02/05 20:12:23 by vpozniak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
AR = ar rcs
CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_printf.c helper_func.c spec_handling.c
OBJ = ft_printf.o helper_func.o spec_handling.o


all: $(NAME)


$(NAME):  $(OBJ)
	$(AR) $(NAME) $(OBJ)

#%.o : %.c
#$(CC) $(CFLAGS) -c $< -o $@
#above is same as below

ft_printf.o : ft_printf.c
	$(CC) $(CFLAGS) -c ft_printf.c -o $@

helper_func.o : helper_func.c
	$(CC) $(CFLAGS) -c helper_func.c -o $@

spec_handling.o : spec_handling.c
	$(CC) $(CFLAGS) -c spec_handling.c -o $@

clean :
	rm -f $(OBJ)


fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re