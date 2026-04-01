# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/30 16:24:50 by vimazuro          #+#    #+#              #
#    Updated: 2026/04/01 15:22:54 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-g #-fsanitize=address

SRC = 	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp \
		MateriaSource.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp %.hpp Makefile
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -f $(OBJS)

fclean: clean
				rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re