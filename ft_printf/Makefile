# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 18:02:55 by ebakchic          #+#    #+#              #
#    Updated: 2022/04/12 16:24:21 by ebakchic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putstr.c ft_putchar.c ft_putunsignednbr.c ft_print_hex.c ft_putnbr.c ft_strchr.c ft_lenbr.c ft_print_hexb.c
NAME	= libftprintf.a
OBJS	= ${SRCS:.c=.o}
CC		= cc
GFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	@ar rcs $(NAME) ${OBJS}

clean:
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
