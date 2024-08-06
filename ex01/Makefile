# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/06 16:52:33 by agrimald          #+#    #+#              #
#    Updated: 2024/08/06 16:52:35 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
RM = rm -rf
CYAN = \033[96m
RED = \033[91m
END_COLOR = \033[0m

SRC =  main.cpp Fixed.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		 @echo "$(CYAN)\nCompilingg!!!!\n$(END_COLOR)"
		 $(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS) 

fclean: clean
		$(RM) $(NAME)

clean:
		@echo "$(RED)\nRemovingg!!!!\n$(END_COLOR)"
		$(RM) $(OBJECTS)

re: fclean all

.PHONY: all fclean clean re
