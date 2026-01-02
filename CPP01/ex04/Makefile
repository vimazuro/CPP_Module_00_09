# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/29 16:02:52 by vimazuro          #+#    #+#              #
#    Updated: 2026/01/02 15:12:28 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g #-fsanitize=address

SRC = main.cpp sed.cpp
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