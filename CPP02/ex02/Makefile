# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/13 17:53:35 by vimazuro          #+#    #+#              #
#    Updated: 2026/02/04 19:21:16 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g #-fsanitize=address

SRC = main.cpp Fixed.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Makefile
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -f $(OBJS)

fclean: clean
				rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re