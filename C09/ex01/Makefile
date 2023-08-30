# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchaves <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 10:41:14 by tchaves           #+#    #+#              #
#    Updated: 2023/08/17 10:47:28 by tchaves          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./includes/

SRCS = srcs/ft_putchar.c\
	srcs/ft_swap.c\
	srcs/ft_putstr.c\
	srcs/ft_strlen.c\
	srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I ${HEADER}

$(NAME) : $(OBJS)
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

.c.o:
	$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

clean :
	$(RM) $(OBJS)
	
fclean : clean
	$(RM) $(NAME)
	
re : fclean all

.PHONY: all clean re fclean
