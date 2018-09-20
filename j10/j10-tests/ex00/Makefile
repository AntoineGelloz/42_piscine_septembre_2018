# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agelloz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/15 11:52:27 by agelloz           #+#    #+#              #
#    Updated: 2018/09/15 17:06:09 by agelloz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = j10

FLG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLG) ./srcs/ft_putchar.c
	gcc -c $(FLG) ./srcs/ft_putstr.c
	gcc -c $(FLG) ./srcs/ft_strcmp.c
	gcc -c $(FLG) ./srcs/ft_strlen.c
	gcc -c $(FLG) ./srcs/ft_swap.c
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -f libft.a

fclean: clean
	rm -f ft_putchar.o
	rm -f ft_putstr.o
	rm -f ft_strcmp.o
	rm -f ft_strlen.o
	rm -f ft_swap.o

re: fclean all