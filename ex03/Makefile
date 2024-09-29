# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 17:27:19 by adbouras          #+#    #+#              #
#    Updated: 2024/09/28 17:41:13 by adbouras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GRN	= \033[1;92m
YLW	= \033[1;93m
RED	= \033[1;91m
CYN = \033[1;96m
RST	= \033[0;39m
CLN	= \033[K\r\c

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = !violence

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

NCLD = Zombie.hpp

OBJ_DIR = objects/

OBJ = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all:$(NAME)

$(OBJ_DIR)%.o:%.cpp $(NCLD)
	@mkdir -p $(OBJ_DIR)
	@echo "$(YLW)[Genarating object file $@]$(RST)\r\c"
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(CLN)"

$(NAME): $(OBJ)
	@echo "$(YLW)[Compiling $(NAME)]$(RST)\r\c"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GRN)[Compiled successfully, to run, execute: ./$(NAME)]$(RST)"
	@echo "$(CLN)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)[Objects cleaned]$(RST)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)[$(NAME) cleaned]$(RST)"


re: fclean all
