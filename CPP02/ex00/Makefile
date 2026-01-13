# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/09 16:38:08 by vimazuro          #+#    #+#              #
#    Updated: 2026/01/09 16:39:17 by vimazuro         ###   ########.fr        #
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