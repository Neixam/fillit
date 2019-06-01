# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anboilea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 15:24:08 by anboilea          #+#    #+#              #
#    Updated: 2019/06/01 04:59:22 by abourenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCPATH	=	src/

LIB		=	lib/

SRC		=	$(SRCPATH)main.c \
			$(SRCPATH)print.c \
			$(SRCPATH)check_file.c \
			$(SRCPATH)ft_strtrimc.c \
			$(SRCPATH)creatree.c \
			$(SRCPATH)creatlang.c \
			$(SRCPATH)ultrim1.c \
			$(SRCPATH)ultrim2.c \
			$(SRCPATH)ft_ra.c \
			$(SRCPATH)ft_int_insert.c \
			$(SRCPATH)ft_int_init.c \
			$(SRCPATH)resolve.c \
			$(SRCPATH)ft_ilen.c \
			$(SRCPATH)ft_print.c \
			$(SRCPATH)gen_grid.c \
			$(SRCPATH)ft_sqrt.c \
			$(SRCPATH)pose_piece.c \

OBJ = $(SRC:.c=.o)

FLAGS = -Wall\
		-Wextra\
		-Werror\

HEADER = includes\

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIB)libft
	gcc $(FLAGS) $^ -o $(NAME) -I $(HEADER) $(LIB)libft/libft.a

%.o: %.c
	gcc $(FLAGS) -o $@ -c $^ -I $(HEADER)

clean:
	/bin/rm -rf $(OBJ)
	make -C $(LIB)libft clean

fclean: clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(LIB)libft/libft.a

re: fclean all
