# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaafia <alaafia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/29 17:19:45 by alaafia           #+#    #+#              #
#    Updated: 2021/05/29 17:47:07 by alaafia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

HPATH = -Iincludes

FLAGS = -Wall -Wextra -Werror -g

SRC_PATH = ./src/

SRC_FILES = ft_memalloc.c 
SRC_FILES += ft_putchar_fd.c
SRC_FILES += ft_putendline_fd.c
SRC_FILES += ft_pipex.c
SRC_FILES += ft_putstr_fd.c
SRC_FILES += pipex.c 
SRC_FILES += ft_strcat.c
SRC_FILES += ft_strcmp.c
SRC_FILES += ft_strdelete.c
SRC_FILES += ft_strjoin.c
SRC_FILES += ft_strlen.c 
SRC_FILES += ft_strsplit.c
SRC_FILES += ft_substr.c
SRC_FILES += ft_search.c
SRC_FILES += ft_strcpy.c


SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	@echo Compilation of $(NAME)
	@gcc $(FLAGS) $(HPATH) $(SRC) -o $(NAME)
	@echo Compilation done !

clean:
	@echo Deleting .o files
	@rm -f $(OBJ)
	@echo Deleting done !

fclean: clean
	@echo Deleting $(NAME)
	@rm -f $(NAME)
	@echo Deleting done !

re:	fclean all

.PHONY: clean
