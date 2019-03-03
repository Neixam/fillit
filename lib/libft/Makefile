# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anboilea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 15:24:08 by anboilea          #+#    #+#              #
#    Updated: 2018/11/18 13:41:57 by anboilea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

STRPATH	=	str/
LSTPATH	=	lst/
CVRPATH	=	cvr/
MEMPATH	=	mem/
CHRPATH	= 	chr/
PUTPATH	=	put/
MTHPATH	=	mth/
IDKPATH	=	idk/

SRC		=	$(MEMPATH)ft_memset.c \
			$(MEMPATH)ft_memcpy.c \
			$(MEMPATH)ft_memccpy.c \
			$(MEMPATH)ft_memmove.c \
			$(MEMPATH)ft_memchr.c \
			$(MEMPATH)ft_memcmp.c \
			$(MEMPATH)ft_memalloc.c \
			$(MEMPATH)ft_memdel.c \
			$(STRPATH)ft_bzero.c \
			$(STRPATH)ft_strlen.c \
			$(STRPATH)ft_strdup.c \
			$(STRPATH)ft_strcpy.c \
			$(STRPATH)ft_strncpy.c \
			$(STRPATH)ft_strcat.c \
			$(STRPATH)ft_strncat.c \
			$(STRPATH)ft_strlcat.c \
			$(STRPATH)ft_strchr.c \
			$(STRPATH)ft_strrchr.c \
			$(STRPATH)ft_strstr.c \
			$(STRPATH)ft_strnstr.c \
			$(STRPATH)ft_strcmp.c \
			$(STRPATH)ft_strncmp.c \
			$(STRPATH)ft_strnew.c \
			$(STRPATH)ft_strdel.c \
			$(STRPATH)ft_strclr.c \
			$(STRPATH)ft_striter.c  \
			$(STRPATH)ft_striteri.c \
		   	$(STRPATH)ft_strmap.c \
		   	$(STRPATH)ft_strmapi.c \
			$(STRPATH)ft_strequ.c \
			$(STRPATH)ft_strnequ.c \
			$(STRPATH)ft_strsub.c \
			$(STRPATH)ft_strjoin.c \
			$(STRPATH)ft_strtrim.c \
			$(STRPATH)ft_strsplit.c \
			$(STRPATH)get_next_line.c \
			\
			$(CVRPATH)ft_atoi.c \
			$(CVRPATH)ft_itoa.c \
			\
			$(CHRPATH)ft_isalpha.c \
			$(CHRPATH)ft_isdigit.c \
			$(CHRPATH)ft_isalnum.c \
			$(CHRPATH)ft_isascii.c \
			$(CHRPATH)ft_isprint.c \
			$(CHRPATH)ft_toupper.c \
			$(CHRPATH)ft_tolower.c \
			\
			$(PUTPATH)ft_putchar.c \
			$(PUTPATH)ft_putstr.c \
			$(PUTPATH)ft_putendl.c \
			$(PUTPATH)ft_putnbr.c \
			$(PUTPATH)ft_putchar_fd.c \
			$(PUTPATH)ft_putstr_fd.c \
			$(PUTPATH)ft_putendl_fd.c \
			$(PUTPATH)ft_putnbr_fd.c \
			$(PUTPATH)ft_min_printf.c \
			\
			$(LSTPATH)ft_lstnew.c \
			$(LSTPATH)ft_lstdelone.c \
			$(LSTPATH)ft_lstdel.c \
			$(LSTPATH)ft_lstadd.c \
			$(LSTPATH)ft_lstiter.c \
			$(LSTPATH)ft_lstmap.c \
			\
			$(MTHPATH)ft_nbrlen.c \
			$(STRPATH)ft_countword.c \
			$(IDKPATH)ft_sort_wordtab.c \
			$(STRPATH)ft_strrev.c \
			$(STRPATH)ft_realloc.c \
			$(STRPATH)ft_strstrsplit.c \
			$(IDKPATH)ft_swap.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall\
		-Wextra\
		-Werror\

HEADER = includes\

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^

%.o: %.c
	gcc $(FLAGS) -o $@ -c $^ -I $(HEADER)

clean:
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
