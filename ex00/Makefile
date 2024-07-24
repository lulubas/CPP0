# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/23 18:05:08 by lbastien          #+#    #+#              #
#    Updated: 2024/07/24 19:52:22 by lbastien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

all: $(NAME)

run: all
	./$(TARGET)

$(NAME):
	g++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all