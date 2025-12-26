# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 15:09:10 by vimazuro          #+#    #+#              #
#    Updated: 2025/12/23 17:18:15 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde_of_Zombies
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

SRC = main.cpp Zombie.cpp zombieHorde.cpp
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