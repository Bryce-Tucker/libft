# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brtucker <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/24 17:48:46 by brtucker          #+#    #+#              #
#    Updated: 2018/10/10 11:21:35 by brtucker         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_memset.c     \
		ft_bzero.c      \
		ft_memcpy.c     \
		ft_memccpy.c    \
		ft_memmove.c    \
		ft_memchr.c     \
		ft_memcmp.c     \
		ft_strlen.c     \
		ft_strdup.c     \
		ft_strcpy.c     \
		ft_strncpy.c    \
		ft_strcat.c     \
		ft_strncat.c    \
		ft_strlcat.c    \
		ft_strchr.c     \
		ft_strrchr.c    \
		ft_strstr.c     \
		ft_strnstr.c    \
		ft_strcmp.c     \
		ft_strncmp.c    \
		ft_atoi.c       \
		ft_isalpha.c    \
		ft_isdigit.c    \
		ft_isalnum.c    \
		ft_isascii.c    \
		ft_isprint.c    \
		ft_toupper.c    \
		ft_tolower.c    \
		ft_memalloc.c   \
		ft_memdel.c     \
		ft_strnew.c     \
		ft_strclr.c     \
		ft_strdel.c     \
		ft_striter.c    \
		ft_striteri.c   \
		ft_strmap.c     \
		ft_strmapi.c    \
		ft_strequ.c     \
		ft_strnequ.c    \
		ft_strsub.c     \
		ft_strjoin.c    \
		ft_strtrim.c    \
		ft_strsplit.c   \
		ft_itoa.c       \
		ft_putchar.c    \
		ft_putstr.c     \
		ft_putendl.c    \
		ft_putnbr.c     \
		ft_putchar_fd.c \
		ft_putstr_fd.c  \
		ft_putendl_fd.c \
		ft_putnbr_fd.c  \
		ft_lstnew.c     \
		ft_lstdelone.c  \
		ft_lstdel.c     \
		ft_lstadd.c     \
		ft_lstiter.c    \
		ft_lstmap.c     \
		ft_round.c      \
		ft_numlen.c     \
		ft_ceil.c       \
		ft_floor.c      \
		ft_isspace.c    \
		ft_wordcount.c  \
		ft_instr.c      \
		ft_strlend.c    \
		ft_strlenuc.c   \
		ft_lstlen.c


OUT = $(FILES:c=o)

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

HEADER = libft.h

all: $(NAME) $(FILES)

$(NAME): $(FILES)
	$(CC) $(FLAGS) -I.$(HEADER) $(FILES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
