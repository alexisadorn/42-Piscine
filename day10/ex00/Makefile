# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adorn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 17:25:37 by adorn             #+#    #+#              #
#    Updated: 2016/11/18 13:25:13 by adorn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILENAME = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCS = $(addprefix srcs/, $(FILENAME))
OBJS = $(addprefix ./, $(FILENAME:.c=.o))

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./includes

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	find . -name '*DS_Store' -delete

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
