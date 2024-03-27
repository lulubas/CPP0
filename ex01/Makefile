# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 17:07:24 by lbastien          #+#    #+#              #
#    Updated: 2024/03/27 17:26:46 by lbastien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = phonebook.cpp

all: $(NAME)

$(NAME): $(SRC)
	g++ $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all