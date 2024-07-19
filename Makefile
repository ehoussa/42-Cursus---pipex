# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebakchic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 15:53:27 by ebakchic          #+#    #+#              #
#    Updated: 2022/04/13 16:11:51 by ebakchic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_access.c error.c pipex.c ft_gtpath.c
NAME    = pipex
OBJS 	= ${SRCS:.c=.o}
AR		= ft_printf/libftprintf.a libft/libft.a
CC		= cc
GFLAGS  = -Wall -Wextra -Werror
MAKEC	= make clean
MAKEF	= make fclean
MAKER	= make re

all: $(NAME)

$(NAME):
	@$(MAKE) -C libft
	@$(MAKE) -C ft_printf
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(CC) -o ${NAME} ${AR} ${OBJS}

clean:
	@$(MAKEC) -C libft
	@$(MAKEC) -C ft_printf
	@${RM} ${OBJS}

fclean: clean
	@$(MAKEF) -C libft
	@$(MAKEF) -C ft_printf
	@${RM} ${NAME}

re: fclean all
	@$(MAKER) -C libft
	@$(MAKER) -C ft_printf

.PHONY: all clean fclean re
