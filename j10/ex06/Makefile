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
	gcc -o do-op $(FLG) do_op.c functions.c operations.c

clean:
	rm -f do-op

fclean: clean
	rm -f functions.o
	rm -f operations.o

re: fclean all